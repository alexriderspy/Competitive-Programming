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

ll f(ll x){
    x++;
    while(x%10==0){
        x=x/10;
    }
    return x;
}
void solve(){
    ll n;
    cin>>n;
    ll cnt=1;
        
    if(n<=19 && n>=11 &&n!=10){
        cnt+=(19-n)+9;
        cout<<cnt<<"\n";
         return;
    }
    if(n>=1 && n<=9){
        cnt=9;
        cout<<cnt<<"\n";
        return;
    }
    
    while(1){

        if(n%10 !=9){
            ll tmp=(n/10)*10+9;
            cnt+=(tmp-n);
            n=tmp;
        }else {
            n=f(n); cnt++;
        }
    if(n<=19 && n>=1 && n!=10){
        break;
    }
}
    if(n<=19 && n>=11){
        cnt+=(19-n)+9;
    }
    if(n>=1 && n<=9){
        cnt+=8;
    }
        
    cout<<cnt<<"\n";
}
int main()

{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    //ll t;cin>>t;
    solve();
}

   
