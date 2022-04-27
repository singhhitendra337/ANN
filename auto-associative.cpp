#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int>inp(4),test(4);
    cout<<"Enter input vector of size 4 : ";
    for(int i=0;i<4;i++) cin>>inp[i];

    cout<<"Enter test vector of size 4 : ";
    for(int i=0;i<4;i++) cin>>test[i];

    vector<vector<int>>wt(4,vector<int>(4,0));


    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            wt[i][j]=inp[i]*inp[j];
        }
    }

     for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<wt[i][j]<<" ";
        }
        cout<<endl;
    }

    vector<int>ans;
    for(int i=0;i<4;i++)
    {
        int val=0;
       for(int j=0;j<4;j++)
       {
           val+=wt[j][i]*test[i];
       } 
       val=val>0?1:-1;
       cout<<val<<" ";
       ans.push_back(val);
    }
}
