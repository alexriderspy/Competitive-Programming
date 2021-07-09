#include<bits/stdc++.h>

using namespace std;
#define ll long long

void solve(){
	int n;cin>>n;
	ll tmp;
	map<ll,set<int> >m;
	for(int i=1;i<=n;i++){
		cin>>tmp;
		m[tmp].insert(i);
	}
	
	ll sum=0;
	for(auto &p:m){
		
		if((int)p.second.size()<=1) continue;
		for(auto i=p.second.begin();i!=p.second.end();i++){
			cout<<*i<<' ';
			auto j=i;++j;
			for(;j!=p.second.end();++j){
				sum+=((*i-1)+(n-*j)+1);
			}
		}
		
	}
	
	cout<<sum<<'\n';
}
int main(){
	int t;cin>>t;
	while(t--){
		solve();
	}
}
