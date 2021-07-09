#include<bits/stdc++.h>

using namespace std;
#define ll long long 

void solve(){
		ll l,r;cin>>l>>r;
		ll x=l,y=l*2;
		if(y>r) cout<<-1<<' '<<-1<<'\n';
		else cout<<x<<' '<<y<<'\n';
}
int main(){
	int t;cin>>t;
	while(t--){
		solve();		
	}
}
