#include <bits/stdc++.h>
using namespace std;
int main() {

    int row_in,col_in;
    cin>>row_in>>col_in;

    vector<vector<int>>input(row_in,vector<int>(col_in));

    for(int i=0;i<row_in;i++) for(int j=0;j<col_in;j++) cin>>input[i][j];

     int row_tar,col_tar;
    cin>>row_tar>>col_tar;

    vector<vector<int>>target(row_tar,vector<int>(col_tar));

    for(int i=0;i<row_tar;i++) for(int j=0;j<col_tar;j++) cin>>target[i][j];

    vector<int>test(row_in);

    for(int i=0;i<row_tar;i++) cin>>test[i];

    vector<vector<int>>wt;

    for(int i=0;i<col_in;i++)
    {
        vector<int>tmp;
        for(int j=0;j<col_tar;j++)
        {
            int val=0;
            for(int k=0;k<row_in;k++)
            {
                val+=input[k][i]*target[k][j];
            }
            tmp.push_back(val);
        }
        wt.push_back(tmp);
    }

    for(int i=0;i<wt.size();i++)
    {
        for(int j=0;j<wt[0].size();j++)
        {
            cout<<wt[i][j]<<" ";
        }
        cout<<endl;
    }

    vector<int>ans;
    for(int i=0;i<wt[0].size();i++)
    {
        int t=0;
        for(int j=0;j<test.size();j++)
        {
            t+=test[j]*wt[j][i];
        }
        if(t>0) t=1;
        else if(t<0) t=-1;
        else t=0;
        ans.push_back(t);
    }

    for(int &x : ans) cout<<x<<" ";



    
    

}
