#include <bits/stdc++.h>
using namespace std;

//AND using hebb bipolar i/p and o/p




int main() {

    int arr[4][3]={ {1,1,1},
                    {1,-1,-1},      
                    {-1,1,-1},
                    {-1,-1,-1}};

    // int alpha,theta;
    // cout<<"Enter learning rate and threshold : ";
    // cin>>alpha>>theta;

     int epoch=1;
    // cout<<"Enter no. of epochs : ";
    // cin>>epoch;

    int w1,w2,dw1,dw2,db,b;
    w1=w2=dw1=dw2=db=b=0;


    for(int k=0;k<epoch;k++)
    {
        cout<<"Weights after epoch "<<k+1<<endl;
        cout<<"w1  w2  b"<<endl;
        for(int i=0;i<4;i++)
        {
            int x1=arr[i][0];
            int x2=arr[i][1];
            int y=arr[i][2];

            w1+=x1*y;
            w2+=x2*y;
            b+=y;
            


            cout<<w1<<"   "<<w2<<"  "<<b<<endl;
            
        }

        

    }





    return 0;

}
