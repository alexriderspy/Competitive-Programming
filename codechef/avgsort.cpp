#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

void solve()
{   
    ll n;
    cin>>n;
    vector<ll>seq;
    seq.reserve(n);
    for(ll i=0;i<n;i++)
    {
        cin>>seq[i];
    }
    for(ll i=0;i<n-1;i++)
    {
        if(seq[i]<seq[i+1])
        {
            cout<<"yes"<<endl;
            return;
        }
    }
    cout<<"no"<<endl;
    return;
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