  #include<bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double
#define MOD 10000007
#define gen(i,a,b) for(ll i=a;i<b;i++)

void solve()
{   
    ll n,m;
    cin>>n>>m;
    vector<ll>rank_college;
    rank_college.reserve(n);
    vector<ll>rank_stu;
    rank_stu.reserve(m);

    for(ll i=0;i<n;i++)
    {
        ll temp;
        cin>>temp;
        rank_college.push_back(temp);
    }
    for(ll i=0;i<m;i++)
    {
        ll temp;
        cin>>temp;
        rank_stu.push_back(temp);
    }
    

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}