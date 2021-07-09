#include<bits/stdc++.h>

using namespace std;

#define ll long long
void solve(){
	int n;
	ll sumo=0,sume=0;
	cin>>n;
	vector<ll>a(n,0);
	for(auto &x:a) cin>>x;
	for(int i=0;i<n;i+=2) sumo+=a[i];
	for(int i=1;i<n;i+=2) sume+=a[i];
	if(sumo<= (sumo+sume+1)/2) {
		for(int k=0;k<n;k++) 
		{	if(k%2==0)
			cout<<1<<' ';
			else
			cout<<a[k]<<' '; 
		
		}
	}
	else{
		for(int k=0;k<n;k++){	
			if(k%2==0)
			cout<<a[k]<<' ';
			else
			cout<<1<<' '; 
		
		}
		
	}
	cout<<'\n';return;
	
}
int main(){
	int t;
	cin>>t;
	while(t--) solve();
}
