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

//function to find all factors of all numbers 
//from 1 to n
const int N=2e5+1;
vector<vector<int>>d(N+1);

void factors(){
    for(int i=1;i<N;i++){
        for(int j=i;j<N;j+=i){
            d[j].push_back(i);
        }
    }

}
bool cmp(pair<ll, ll> a, pair<ll, ll> b) {return a.second < b.second;}

void solve(){
int n;
    cin>>n;
    vector<int>a,s[n+1];
    for(int i=0;i<n;i++){
        int tmp;
        cin>>tmp;
        a.push_back(tmp);
    }
    for(int i=0;i<n;i++){
        int tmp;
        cin>>tmp;
        s[a[i]-1].push_back(tmp);

    }
    ll ans[n+1];
    memset(ans,0,sizeof(ans));
    for(int i=0;i<n;i++){
        if(sz(s[i])==0) continue;
        sort(s[i].rbegin(),s[i].rend());
        vector<ll>p(sz(s[i])+1);
        p[0]=0;
        for(int j=1;j<=sz(s[i]);j++){
            p[j]=p[j-1]+s[i][j-1];
            for(int k:d[j]){
                ans[k]+=p[j]-p[j-k];
            }
        }
    }
    fu(i,1,n+1) cout<<ans[i]<<" ";
    cout<<'\n';
}
int main()

{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    factors();
    ll t;cin>>t;
    while(t--)
    solve();
}

   
