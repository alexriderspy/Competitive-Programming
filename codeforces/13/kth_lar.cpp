#include<bits/stdc++.h>

using namespace std;

//#define ll long long
 
void solve()
{   
    int n,q;
    cin>>n>>q;
    vector<int>seq;
    seq.reserve(n);
    int ones=0;
    
    for(int i=0;i<n;i++)
    {
        cin>>seq[i];
        if(seq[i]==1)
        {
            ones++;
        }
       
    }
    
    for(int i=0;i<q;i++)
    {
        int temp;
        cin>>temp;
        if(temp==1)
        {
            int x;
            cin>>x;
            if(seq[x-1]==1){
                ones--;seq[x-1]=0;
            }
            else
            {
                ones++;seq[x-1]=1;
            }
            
        }
        else if(temp==2)
        {
            
            
            int k;
            cin>>k;
            if(k<=ones)
            {
                cout<<1<<endl;
            }
            else{
                cout<<0<<endl;
            }
            
        }
    }

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}