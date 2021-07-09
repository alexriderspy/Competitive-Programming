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
ll gcd (ll a, ll b) {
  ll r, i,tmp;
  while(b!=0){
    if(a<b){
        tmp=a,a=b,b=tmp;
    }
    r = a % b;
    a = b;
    b = r;
  }
  return a;
}
void solve(){
    ll n;
    cin>>n;
    vector<ll>a;
    for(ll i=0;i<n;i++){
        ll tmp;
        cin>>tmp;
        a.push_back(tmp);
    }
    ll k=0;
    ll maxi=*max_element(a.begin(),a.end());
    for(ll i=1;i<n;i++){
        if(gcd(a[i-1],a[i])==1) continue;
        ll l=0;
        if(a[i-1]<a[i]){
            
        }

    }

}
int main()

{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll t;cin>>t;
    while(t--)
    solve();
}

   
