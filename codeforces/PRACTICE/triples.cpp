#include<bits/stdc++.h>

using namespace std;
#define ll long long
const int N =1e9;
void solve(){
	ll n;cin>>n;
	ll cnt=0;
	for(int i=3;i*i<= (2*n+1);i+=2){
		ll b=(i*i-1)/2;
		if(b>=i && (1+b)<=n)
		cnt++;
	}
	cout<<cnt<<'\n';
}
int main(){
	vector<ll>sq(sqrt(N)+2,0);
	for(int i=1;i*i<=N;i++){
		sq[i]=i*i;
	}
	int t;cin>>t;
	while(t--) solve();
}
