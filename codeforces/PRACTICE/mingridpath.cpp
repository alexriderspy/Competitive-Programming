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

void solve(){
    int n;
    cin>>n;
    vector<ll>v(n+1,0);
    for(int i=1;i<=n;i++) cin>>v[i];
    ll cost=0;
    int minoddpos=1,minevepos=2;
    for(int i=1;i<=n;i+=2) {
    	if(v[i]<v[minoddpos]) minoddpos=i;
	}
    for(int i=2;i<=n;i+=2) {
    	if(v[i]<v[minevepos]) minevepos=i;
	}
	for(int i=1;i<minoddpos;i+=2){
		cost+=(v[i]); 
	}
	for(int i=2;i<minevepos;i+=2){
		cost+=(v[i]);
	}
	ll left;
	left=(n-((minoddpos-1)/2));
	cost+=(v[minoddpos]*left);
	left=(n-((minevepos-2)/2));
	cost+=(v[minevepos]*left);
	cout<<cost<<'\n';
}
int main()

{
    //ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll t;cin>>t;
    while(t--)
	solve();
}

   
