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

const ll inf=1e18L+5;

bool cmp(pair<ll, ll> a, pair<ll, ll> b) {return a.second < b.second;}

void solve(){
    int n;
    cin>>n;
    vector<ll>a;
    for(int i=0;i<n;i++){
        ll tmp;
        cin>>tmp;
        a.push_back(tmp);
    }
    vector<int>r(n+1,1),l(n+1,1);
    //ri - max_len starting at i, li - max_len ending at i
    for(int i=n-2;i>=0;i--){
        if(a[i]<a[i+1]){
            r[i]=r[i+1]+1;
        }
    }
    for(int i=1;i<n;i++){
        if(a[i]>a[i-1]){
            l[i]=l[i-1]+1;
        }
    }
    int max_len=*max_element(l.begin(),l.end());
    //removing elements
    //no need to remove last and first
    for(int i=1;i<n-1;i++){
        if(a[i-1]<a[i+1]){
            max_len=max(max_len,l[i-1]+r[i+1]);
        }
    }
    cout<<max_len<<"\n";

}
int main()

{
    //ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    //ll t;cin>>t;
    solve();
}

   
