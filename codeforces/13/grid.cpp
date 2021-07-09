#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define MOD 1000001
ll min(ll a,ll b)
{
    return a<=b?a:b;
}
/*
void solve()
{   
    ll n,t,u,v,cost=0,x;
    cin>>n>>u>>v;
    ll mini=min(u,v);

    for(ll i=0;i<n;i++)
    {
        cin>>x;
        if (x==1 && i==0)
        {   
            cin>>x;
            if(x==0){
                cost+=min(u,v);
            }
        } 
        if(i>0 && (t>=(x+2) || x>=(t+2)))
        {
            
        }
        if(i>0 && t!=x){
            cout<<mini<<endl;return;
        }
        t=x;
    }
    cout<<u+v<<endl;return;
    

}*/
void solve()
{
    ll n,u,v,cost=0,flag=0,mag=0;
    cin>>n>>u>>v;
    ll mini=min(u,v);
    vector<ll> a;
    a.reserve(n);
    
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        if(i>0 && a[i]!=a[i-1]){
            flag=1;
        } 
        if(i>0 && abs(a[i]-a[i-1])>=2)
        {
            mag=1;
        }
    }
    if(flag==0)           //all in one line
    {
        cout<<min((u+v),2*v)<<endl; return;
    }

    if(a[0]==1 && a[1]==0){
        cost+=mini;
    }
    if(a[n-1]==MOD-1 && a[n-2]==MOD)
    {
        cost+=mini;
    }
    if(mag==0)
    {
        cost+=mini;
    }
    cout<<cost<<endl;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}