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
    int n;
    cin>>n;
    if(n==2) {cout<<-1<<endl;return;}
    if(n==1) {cout<<1<<endl;return;}
    vector<int>a;
    for(int i=0;i<n*n;i++){
        a.push_back(i+1);
    }
    int l=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(l<n*n)
            {
                cout<<a[l]<<" ";l+=2;
            }else{
                l=1; cout<<a[l]<<" "; l+=2;
            }
        }
        cout<<"\n";
    }
    

}
int main()

{
    //ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int t;cin>>t;
    while(t--)
    solve();
}

   
