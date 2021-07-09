#include<bits/stdc++.h>

using namespace std;

void solve(){
		long long int i,x,y;
		cin>>x;
		for(i=0;11*i<=x;i++){
			y=x-11*i;
			if(y%111==0){
				cout<<"YES\n";return;
			}
		}
		cout<<"NO\n";		
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
