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
    ll n;int d=0;
    cin>>n;
    
    ll c=0;
    ll tm=n;
    while(tm){
        tm/=10;
        d++;
    }
    tm=n;
    //cout<<d<<" ";
    ll p=power(10,d-1);
    int f=tm/p;
    c+=((d-1)*9);
    ll lb=0;
    for(int i=1;i<=d;i++){
        lb=lb*10+f;
    }
   // cout<<lb<<" ";
    if(n<lb){
        c+=(f-1);
    }else if(n>=lb){
        c+=f;
    }
    cout<<c<<endl;
}
int main()

{
    ////ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    //vector<ll>a;int i=1;
    
    ll t;cin>>t;
    while(t--)
    solve();
}

   
