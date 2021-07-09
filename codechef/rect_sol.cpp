//we try to get the first cell having 1 and last cell 1 
//then we check if there is 1 elsewhere or if there is 0 inside

#include<bits/stdc++.h>

using namespace std;

void solve()
{   
    int n,m;
    cin>>n>>m;
    vector<string>row(n);
    row.reserve(n);
    for(int i=0;i<n;i++)
    {
        cin>>row[i];
    }
    int firstx=-1,firsty=-1,lastx=-1,lasty=-1;
    //int flag=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(row[i][j]=='1' && firstx==-1)   
            {
                firstx=i;
                firsty=j;
      //          flag=1;
            }
        
            if(row[i][j]=='1')
            {
                lastx=i,lasty=j;
            }
        }

    }
//    cout<<firstx<<firsty<<lastx<<lasty;
    //flag=0;
    for(int i=firstx;i<=lastx;i++)
    {
        for(int j=0;j<firsty;j++)
        {
            if(row[i][j]=='1') 
            {
                cout<<"No"<<endl;return;
            }
        }
        for(int j=firsty;j<=lasty;j++)
        {
            if(row[i][j]=='0')
            {
                cout<<"No"<<endl;return;
            }
        }
        for(int j=lasty+1;j<m;j++)
        {
            if(row[i][j]=='1')
            {
                cout<<"No"<<endl;
                return;
            }
        }
    }
    cout<<"Yes"<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}