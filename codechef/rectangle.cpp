#include<bits/stdc++.h>
using namespace std;



int num_consec_ones(string row,int m)
{
    int c=0;
    for(int i=0;i<m;i++)
    {
        if(row[i]==1)   c++;
        if(c>1 && row[i-1]==0 && row[i]==1)   
        {
            c=-1;
            break;
        }
    }
    return c;
    
}
int start_index(string row,int m)
{
    for (int i=0;i<m;i++)
    {
        if(row[i]==1)
        return i;
    }
}

void solve()
{
    int n,m,flag=0;;
    cin>>n>>m;
    vector<string>row;
   // row.reserve(n);
    for(int i=0;i<n;i++)
    {
        string str;
        cin>>str;
        row.push_back(str);
        for(int j=0;j<m;j++)
           row[i][j]=row[i][j]-'0';

    }
    set<int>s;
    for(int j=0;j<n;j++)
    {
        
        if(num_consec_ones(row[j],m)==-1)
        {
            cout<<"No"<<endl;
            return;
        }
        if(num_consec_ones(row[j],m) && flag==1 && num_consec_ones(row[j-1],m)==0)
        {
            cout<<"No"<<endl;
            return;
        }
        if(num_consec_ones(row[j],m) && flag==0)
        {
            s.insert(num_consec_ones(row[j],m));
            flag=1;
        }
    }
    if(s.size()==1)
    {
        set<int>start;
        for(int j=0;j<n;j++)
        {
            if(num_consec_ones(row[j],m))
            {

                start.insert(start_index(row[j],m));
            }
        }
        if(start.size()==1)
        {
            cout<<"Yes"<<endl;
            return;
        }
        else{
            cout<<"No"<<endl;
            return;
        }

    }
    
}

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}