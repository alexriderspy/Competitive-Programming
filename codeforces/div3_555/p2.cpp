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
    int d,i=0;
    string s,ans="";
    cin>>d>>s;
    vector<int>a;
    for(;i<9;i++){
        int tmp;
        cin>>tmp;
        a.push_back(tmp);
    }
    for(i=0;i<d;i++){
        int h=s[i]-'0';
      //  cout<<h<<" ";
        if(a[h-1]>(h)){
            break;
        }
        ans+=s[i];
    }
    //cout<<ans<<" ";
    int j=i;
    while(j<d){
        int h=(s[j]-'0');
        if(a[h-1]<h){
            break;
        }
        char ch=a[h-1]+'0';
        ans+=(ch);
        j++;
    }
    for(i=j;i<d;i++){
        
        ans+=s[i];
    }
    cout<<ans<<"\n";
}
int main()

{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    //ll t;cin>>t;
    solve();
}

   
