#include<bits/stdc++.h>

using namespace std;
typedef vector<int> VI;
typedef vector<vector<int> > VVI;
typedef vector<string> VS;
typedef vector<vector<string> > VVS;
typedef signed long long i64;
typedef unsigned long long u64;

#define pi pair<int, int>
#define mod 1000000007
#define ll long long
#define ld long double
#define fu(i, m, n) for (ll i = (m); i < (n); ++i)
#define pb push_back
#define YES cout<<"YES"<<'\n';
#define NO cout<<"NO"<<'\n'; 
#define sz(x) (int)(x).size()

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
const int N=2e5+1;
vector<vector<int> >d(N+1);
//for storing factors of every number from 1 to N
void factors(){
    for(int i=1;i<N;i++){
        for(int j=i;j<N;j+=i){
            d[j].push_back(i);
        }
    }

}

bool cmp(pair<ll, ll> a, pair<ll, ll> b) {return a.second < b.second;}

void solve(){
	int n,l=100;
	cin>>n;
	for(int i=2;i<=n;i++){
		if(l%i==0 && n%i==0) {
			l/=i,n/=i; i=1;
           // cout<<l<<" "<<i<<" ";
		}
	}
	cout<<l<<'\n';
}
int main()

{
    //ios_base::sync_with_stdio(false), cin.tie(0);
    int t;cin>>t;
    while(t--)
	solve();
}

   
