#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double
#define MOD 100000
#define gen(i,a,b) for(ll i=a;i<b;i++)

void solve()
{   
    ll s;
    cin>>s;
    vector<ll>seq;
    seq.reserve(s);
    for(ll i=0;i<s;i++)
    {
        cin>>seq[i];   //duration of intro song in each season
    }
    ll e;
    ll dur[MOD];
    ll sum=0;
    for(ll i=0;i<s;i++)
    {
        cin>>e;
        for(ll j=0;j<e;j++)
        {
            cin>>dur[j];
            dur[j]-=seq[i];
            sum+=dur[j];
        }
        sum+=seq[i];
    }
    cout<<sum<<endl;
    


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