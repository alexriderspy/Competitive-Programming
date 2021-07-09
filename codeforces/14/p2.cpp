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
#define NO cout<<"NO"<<'\n';
#define YES cout<<"YES"<<'\n';

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
const int N=1e9;
int main()

{
    //ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
  	vector<ll>squares(sqrt(N)+5,0);
  	for(int i=1;i*i<=N;i++){
  		squares[i]=i*i;
	}
	int t;cin>>t;
  	for(int i=1;i<=t;i++){
  		ll n;
  		cin>>n;
  		if(n%2!=0) {NO; continue;
		}
		n/=2;
		if(n%2==0){
			//4x
			n/=2;
			auto it=find(squares.begin(),squares.end(),n);
			if(it!=squares.end()) {
				YES continue;
			}
			n*=2;
		}
			
	auto it=find(squares.begin(),squares.end(),n);
	if(it==squares.end()) {NO; continue;
	}
	else {YES;continue;
}}}

   
