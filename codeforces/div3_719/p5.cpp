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
    ll lb=0,n,i=0,j,ub;
    cin>>n;
    string s;
    cin>>s;
    ll sum=0;
    vector<ll>a(n+1,0);
    j=n-1,ub=n-1;
    for(ll i=0;i<n;i++){
        if(s[i]=='*'){
            sum++;
        }
        a[i]=sum;
    }
    //fu(i,0,n) cout<<a[i]<<" ";
    for(i=0;i<n;i++){
        if(s[i]=='*'){
            lb=i; 
            break;
        }
    }
   // cout<<lb<<" ";
    for(j=n-1;j>=lb;j--){
        if(s[j]=='*'){
            ub=j;//cout<<j<<"j ";
            break;
        }
    }
    //cout<<ub<<" ";
    ll moves=0;
    for(ll i=lb;i<=ub;i++){
        if(s[i]=='.'){
            moves+=min(a[i],a[n-1]-a[i]);

        }
    }
    cout<<moves<<"\n";
}
int main()

{
    //ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll t;cin>>t;
    while(t--)
    solve();
}

   
