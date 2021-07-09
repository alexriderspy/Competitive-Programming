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
const ll m=1e6+6;
bool prime[m];
void SieveOfEratosthenes(int n)
{
    
    memset(prime, true, sizeof(prime));
 
    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
}
 

bool cmp(pair<ll, ll> a, pair<ll, ll> b) {return a.second < b.second;}

void solve(){
    ll d;cin>>d;
    ll p=1+d;
    while(1){
        if(prime[p]==1){
            break;
        }
        p++;
    }
    ll q=p+d;
    while(1){
        if(prime[q]==1){
            break;
        }
        q++;
    }
    ll a;
    if(p*p<q)
    a=p*p*p;
    else
    a=p*q;
    cout<<a<<endl;
}
int main()

{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll k=(1e6+5);
    SieveOfEratosthenes(k);   
    ll t;cin>>t;
    while(t--)
    solve();
}

   
