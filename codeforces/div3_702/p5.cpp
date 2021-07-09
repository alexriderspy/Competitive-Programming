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
    vector<pair<ll,ll>>a;
    for(ll i=0;i<n;i++){
        ll tmp;
        cin>>tmp;
        a.push_back({tmp,i+1});
    }
    sort(a.begin(),a.end());
    vector<ll>res(n+1);
    res[0]=a[0].first;
    for(int i=1;i<n;i++){
        res[i]=res[i-1]+a[i].first;
    }
    vector<ll>mark(n+1);
    vector<ll>play;
    mark[n-1]=1;
    for(ll i=n-2;i>=0;i--){
        if(res[i]>=a[i+1].first && mark[i+1]){
            play.push_back(a[i].second);
            mark[i]=1;
        }else{
            break;
        }
    }
    play.push_back(a[n-1].second);
    sort(play.begin(),play.end());
    cout<<play.size()<<"\n";
    for(int i=0;i<play.size();i++){
        cout<<play[i]<<" ";
    }
    //cout<<a[n-1].second<<" ";
    cout<<"\n";
}
int main()

{
   // ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll t;cin>>t;
    while(t--)
    solve();
}

   
