#include <bits/stdc++.h>
using namespace std;

//AND using perceptron bipolar i/p and o/p




int main() {

    int arr[4][3]={ {1,1,1},
                    {1,-1,-1},      
                    {-1,1,-1},
                    {-1,-1,-1}};

    int alpha,theta;
    cout<<"Enter learning rate and threshold : ";
    cin>>alpha>>theta;

    int epoch;
    cout<<"Enter no. of epochs : ";
    cin>>epoch;

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
            int yin=w1*x1+w2*x2+b;
            int t=arr[i][2];

            int yout;

            if(yin>theta) yout=1;
            else if(yin<theta) yout=-1;
            else yout=0;

            if(t!=yout)
            {
                dw1=alpha*t*x1;
                dw2=alpha*t*x2;
                db=alpha*t;

                w1+=dw1;
                w2+=dw2;
                b+=db;

            }
            else{
              dw1=dw2=db=0; 
            }

            cout<<w1<<"   "<<w2<<"  "<<b<<endl;
            
        }

        

    }





    return 0;

}
