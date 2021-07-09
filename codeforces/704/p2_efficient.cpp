#include<iostream>
#include<algorithm>
#include<map>
#include<vector>

#define ll long long 
using namespace std;

void solve(vector<ll> v)
{
    map<ll,ll>m;
    for(ll i=0;i<v.size();i++)
    {
        m[v[i]]=i;
    }
    ll n=v.size();
    ll x;
    ll p=n;
    for(ll i=n;i>=1;i--)
    {
        x=m[i];
        if(x>p)
        {
            continue;
        }
        for(ll j=x;j<p;j++)
        {
            cout<<v[j]<<" ";
        }
        p=x;
    }
}

int main()
{
    int  t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>v;
        v.reserve(n);
        for(ll i=0;i<n;i++)
        {
            ll t;
            cin>>t;
            v.push_back(t);
        }
        solve(v);
        cout<<endl;
    }
}