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
    ll n;
    cin>>n;
    vector<ll>a;
    for(ll i=0;i<n;i++){
        ll tmp;
        cin>>tmp;
        a.push_back(tmp%2);// tmp%2 == tmp&=1
    }
    vector<int>ans;
    for(ll i=0;i<n;i++){
        if(!ans.empty()&&a[i]==ans.back()){
            ans.pop_back();
        }else{
            ans.push_back(a[i]);
        }

    }
    if(ans.size()<=1){
        cout<<"YES"<<'\n';
    }else{
        cout<<"NO"<<'\n';
    }

}
int main()

{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    //ll t;cin>>t;
    solve();
}

   
