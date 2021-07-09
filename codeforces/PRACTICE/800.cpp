#include<bits/stdc++.h>

using namespace std;

void solve(){
	int x,y;
	cin>>x>>y;
	string s;
	cin>>s;
	int u=0,d=0,r=0,l=0;
	for(int i=0;i<(int)s.size();i++){
		if(s[i]=='U') u++;
		if(s[i]=='D') d++;
		if(s[i]=='R') r++;
		if(s[i]=='L') l++;
		
	}
	d=-d;
	l=-l;
	if(u<y && y>=0){
		cout<<"NO"<<'\n'; return;
	}
	if(d>y && y<=0){
		cout<<"NO"<<'\n'; return;
	}
	if(r<x && x>=0){
		cout<<"NO"<<'\n'; return;
	}
	if(l>x && x<=0){
		cout<<"NO"<<'\n'; return;
	}
	cout<<"YES"<<'\n';
	
}
int main(){
	int t;
	cin>>t;
	while(t--) solve();
}
