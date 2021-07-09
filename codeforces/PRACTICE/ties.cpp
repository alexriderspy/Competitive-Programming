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
    int n,i,j,k;
    cin>>n;
    int d,w,l;
    w=((n-1)/2);
	l=w;
    d=(n-1-2*w);
    //n-1 X n array
    vector<vector<int> >a(n+1,vector<int>(n+2,2));
    vector<int>cw(n+2,0),cl(n+2,0),cd(n+2,0);

	for(int j=1;j<=n;j++){
		for(int i=1;i<=n-1;i++){
			
			if(a[i][j]==2 && cd[j]<d && a[j][i+1]==2 && cd[i+1]<d) 
			{
				
				a[i][j]=0,a[j][i+1]=0; cd[j]++,cd[i+1]++;	
			} 

            if(a[i][j]==2 && cw[j]<w && a[j][i+1]==2 && cl[i+1]<l) 
			{
                
				a[i][j]=1,a[j][i+1]=-1; cw[j]++,cl[i+1]++;	
			} 
			if(a[i][j]==2 && cl[j]<l && a[j][i+1]==2 && cw[i+1]<w) 
			{
				
				a[i][j]=-1,a[j][i+1]=1; cl[j]++; cw[i+1]++;	
			} 

		}
	}
    for(int j=1;j<=n-1;j++)
	for(int i=j;i<=n-1;i++) {
		cout<<a[i][j]<<' ';
	}
	cout<<'\n';
}
int main()

{
   // ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll t;cin>>t;
    while(t--)
	solve();
}

   
