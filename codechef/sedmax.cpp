#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double
#define MOD 10000007
#define gen(i,a,b) for(ll i=a;i<b;i++)

void maxform(set<ll>&m,vector<ll>&seq)
{
    if(seq.size()==1)
    return;
    auto max=max_element(seq.begin(),seq.end());
    ll maxi=*max;
    seq.erase(max);
    auto secmax=max_element(seq.begin(),seq.end());
    ll sec_maxi=*secmax;
    m.insert(maxi-sec_maxi);
    maxform(m,seq);
}
void solve()
{   
    ll n;
    cin>>n;
    vector<ll>seq;
   // seq.reserve(n);
    for(ll i=0;i<n;i++)
    {
        ll temp;
        cin>>temp;
        seq.push_back(temp);
    }
    set<ll>sedmax;
    maxform(sedmax,seq);
    cout<<sedmax.size()<<endl;
    sedmax.clear();
    seq.clear();
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