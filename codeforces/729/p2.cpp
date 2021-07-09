#include<bits/stdc++.h>

using namespace std;

#define ll long long
void solve(){
	    ll a,b,n;
		cin>>n>>a>>b;
        if(a==1){
            if(n%b==1%b) cout<<"YES\n";
            else cout<<"NO\n";
            return;
        }
        for(ll j=1;j<=n;j*=a){
            if(j%b == n%b) {
                cout<<"YES\n"; return;
            }
        }
        cout<<"NO\n";return; 
}
int main(){
	int t;cin>>t;
	while(t--){
        solve();
	}
}