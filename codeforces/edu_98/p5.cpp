#include<bits/stdc++.h>

using namespace std;
int main(){
	int n,m,k;
	cin>>n>>m>>k;
	vector<pair<int,int> >v;
	for(int i=1;i<=n;i++){
		int s,e;cin>>s>>e;
		v.push_back({s,1}),v.push_back({e,-1});
	}
	sort(v.begin(),v.end());
	int now=0,mx=0,mxp=0;
	int pos;
	for(int i=0;i<2*n;i++){
		now+=v[i].second;
		if(now>mx) {
			mxp=v[i].first;
			mx=now; pos=i;
		}
	}
	int ans=0;
	for(int j=i;j<=k;j++){
		ans+=(v[j].second)
		v.erase(j);
		
	}
	
}
