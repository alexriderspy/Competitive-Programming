#include<bits/stdc++.h>

using namespace std;
typedef vector<int> VI;
typedef vector<vector<int>> VVI;
typedef vector<string> VS;
typedef vector<vector<string>> VVS;
typedef signed long long i64;
typedef unsigned long long u64;

#define pi pair<int, int>
#define mod 1000000007
#define ll long long
#define ld long double
#define fu(i, m, n) for (ll i = (m); i < (n); ++i)
#define fr(i, S, E) for (typeof(E) i = (S); i != (E); ++i)
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define YES cout<<"YES"<<endl;
#define NO cout<<"NO"<<endl; 


ll fact(ll n){
    ll p=1;
    for(ll k=1;k<=n;k++){
    p*=k;
    p=p%mod;
    }
    p=p%mod;
    return p;

}

ll power(ll n, ll k){
    ll p=1;
    while(k--){
        p*=n;
    }
    return p;
}


bool cmp(pair<ll, ll> a, pair<ll, ll> b) {return a.second < b.second;}

void solve(){
    ll n,m;
    cin>>n>>m;
    vector<ll>a,x,sum(n+1),sortsum(n+1);
    for(ll i=0;i<n;i++){
        ll tmp;
        cin>>tmp;
        a.push_back(tmp);
    }
    for(ll i=0;i<m;i++){
        ll tmp;
        cin>>tmp;
        x.push_back(tmp);
    }
    sum[0]=a[0];
    sortsum[0]=a[0];
    for(ll i=1;i<n;i++){
        sum[i]=sum[i-1]+a[i];
        sortsum[i]=sortsum[i-1]+a[i];

    }
     
    for(ll i:x){
        ll index;
        if(binary_search(sortsum.begin(),sortsum.end(),i))
        {index=(lower_bound(sum.begin(),sum.end(),i)-sum.begin());
        cout<<index<<" ";
        }
    }
    cout<<endl;
}
int main()

{
  //  ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll t;cin>>t;
    while(t--)
    solve();
}

   
