#include <bits/stdc++.h>
using namespace std;

//AND using adaline bipolar i/p and o/p




int main() {

    int arr[4][3]={ {1,1,1},
                    {1,-1,-1},      
                    {-1,1,-1},
                    {-1,-1,-1}};

    double alpha;
    cout<<"Enter learning rate : ";
    cin>>alpha;

    int epoch;
    cout<<"Enter no. of epochs : ";
    cin>>epoch;

    double w1,w2,dw1,dw2,db,b;
    w1=w2=dw1=dw2=db=b=0;


    for(int k=0;k<epoch;k++)
    {
        cout<<"Weights after epoch "<<k+1<<endl;
        cout<<"w1  w2  b"<<endl;
        for(int i=0;i<4;i++)
        {
            int x1=arr[i][0];
            int x2=arr[i][1];
            double yin=1.0*w1*x1+1.0*w2*x2+b;
            int t=arr[i][2];

            dw1=alpha*(t-yin)*x1;
            dw2=alpha*(t-yin)*x2;
            db=alpha*(t-yin);
            w1+=dw1;
            w2+=dw2;
            b+=db;
            cout<<fixed<<setprecision(4)<<w1<<"   "<<w2<<"  "<<b<<endl;
            
        }

        

    }





    return 0;

}
