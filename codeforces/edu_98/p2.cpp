#include<bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
	int t;cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<ll>v(n,0);
		ll mini=1e9+1,maxi=0;
		for(int i=0;i<n;i++){
			cin>>v[i];
			maxi=max(maxi,v[i]);
		}
		int pos=0;
		for(int i=0;i<n;i++){
			if(v[i]<mini) pos=i,mini=v[i];
		}
		ll blocks=0,ans=0;
		for(int i=0;i<n;i++){
			if(pos==i) continue;
			blocks+=(maxi-v[i]);
		}
		if(blocks<v[pos]){
			ll a=(v[pos]-blocks +n-2)/(n-1);
			blocks+=(a*(n-1));
		}
		ans=blocks-mini;
		cout<<ans<<'\n';
	}
}
