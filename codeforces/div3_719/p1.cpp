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
    string s,a="";
    cin>>s;
    if(s.size()==1) {YES return;}
    int visited[26];
    memset(visited,0,sizeof(visited));
    int h=s[0]-'A';
    visited[h]=1;a+=s[0];
    for(int i=1;i<n;i++){
        if(s[i]!=s[i-1]){
            a+=s[i];
        }
    }
  //  cout<<a<<" ";
    for(int i=1;i<a.size();i++){
        h=a[i]-'A';
        if(visited[h]==1){
            NO return;
        }
        visited[h]=1;
    }
    YES return;
}
int main()

{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int t;cin>>t;
    while(t--)
    solve();
}

   
