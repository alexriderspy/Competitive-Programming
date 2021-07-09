#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double
#define MOD 10000007
#define gen(i,a,b) for(ll i=a;i<b;i++)

void solve()
{   
    ll n;
    cin>>n;
    vector<ll>seq;
    seq.reserve(n);
    for(ll i=0;i<n;i++)
    {
        ll temp;
        cin>>temp;
        seq.push_back(temp);
    }
    sort(seq.begin(),seq.end());
 /*   for(ll i=0;i<n;i++)
    {
        cout<<seq[i]<<" ";
    }*/

    ll a1=seq[n-1];
   // cout<<a<<" ";
    seq.erase(seq.end()-1);
    ll b1=seq[n-2];
    ll a2=seq[1];
    ll b2=seq[0];
    ll ans2=a2*b2+(a2-b2);
    ll ans1=a1*b1+(a1-b1);
    if(ans1>=ans2)
    cout<<ans1<<endl;
    else{
        cout<<ans2<<endl;
    }
    seq.clear();
    return;
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