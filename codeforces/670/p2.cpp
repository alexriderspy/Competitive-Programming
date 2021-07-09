#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main() {
	int t;cin>>t;
	while(t--){
	    int n;cin>>n;
	    vector<ll>a;
	    
	    for(int i=0;i<n;i++) {
	        ll x;cin>>x;
	        a.push_back(x);
	    }
        sort(a.begin(),a.end());
        ll ans=max(a[n-1]*a[n-2]*a[n-3]*a[n-4]*a[n-5],max(a[n-1]*a[n-2]*a[n-3]*a[0]*a[1],a[n-1]*a[0]*a[1]*a[2]*a[3]));
        cout<<ans<<'\n';
	}
	return 0;
}
