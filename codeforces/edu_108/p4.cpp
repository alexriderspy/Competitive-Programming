#include<bits/stdc++.h>

using namespace std;
#define ll long long 
int main(){
	int n;cin>>n;
	vector<ll>a(n,0),b(n,0);
	for(auto &x:a) cin>>x;
	for(auto &x:b) cin>>x;
	vector<ll>pref(n+2,0);
	for(int i=0;i<n;i++){
		pref[i+1]=pref[i]+(a[i]*b[i]);
	}
	//O(n^2) is cool.. don't reverse.. simply think of iterating over the centre of the segment
	//for both even and odd possiblities
	ll ans=pref[n];
	for(int c=0;c<n;c++){
		ll cur=(a[c]*b[c]);
		for(int l=c-1,r=c+1;l>=0 && r<n;--l,++r){
			cur+=((a[l]*b[r])+(a[r]*b[l]));
			ans=max(ans,cur+pref[l]+(pref[n]-pref[r+1]));   //1,l + r,n
		}
		//even
		cur=0; //has no mid
		for(int l=c,r=c+1;l>=0 && r<n;--l,++r){
			cur+=((a[l]*b[r])+(a[r]*b[l]));
			ans=max(ans,cur+pref[l]+(pref[n]-pref[r+1]));
		}
		
		
	}
	cout<<ans<<'\n';
}
