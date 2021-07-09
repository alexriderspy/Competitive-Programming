#include<bits/stdc++.h>

using namespace std;

void solve(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	int cnt[2]; //'D' 1st one 'K' 2nd one
	cnt[0]=0,cnt[1]=0;
	for(int i=0;i<n;i++){
		if(s[i]=='D') cnt[0]++;
		else cnt[1]++;
	}
	vector<int>ans(n,1);
	vector<int> v[n];  //1st cell->no of occurences, 2nd cell D 3rd cell K (lowest ratio)
	int d=cnt[0],k=cnt[1];
	for(int l=n-1;l>=0;l--){
		int g=__gcd(d,k);
		v[l].push_back(g);
		
		v[l].push_back(d/g);
		v[l].push_back(k/g);
		if(s[l]=='D') d--;
		else k--;
		
	}
	for(int l=0;l<n;l++) cout<<v[l][0]<<'\n';
}
int main(){
	int t;
	cin>>t;
	while(t--) solve();
}
