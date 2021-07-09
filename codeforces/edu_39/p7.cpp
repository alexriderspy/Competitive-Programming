#include<bits/stdc++.h>

using namespace std;
#define ll long long 

int main(){
	ll n;
	cin>>n;
	vector<ll>v(n,0);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}	
	vector<int>visited(n+1,0);
	int ans=0,mini=n+1;
	
	
	for(int i=1;i<n;i++){
		if(v[i]<=v[i-1]){
				ans++; v[i]=v[i-1]+1;
			}
		}
	//i=visiting index
	if(ans==0) cout<<0<<'\n';
	else cout<<ans-1<<'\n';
	}

