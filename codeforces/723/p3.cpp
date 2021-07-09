#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	vector<int>v(n,0);
	for(auto &k:v) cin>>k;
	priority_queue<int,vector<int>,greater<int>>s;
	//this is syntax for min heap


	ll sum=0;
	int cnt=0;
	for(int i=0;i<n;i++){
		sum+=v[i];
		cnt++;
		if(v[i]<0) s.push(v[i]);
		if(sum<0){
			ll top=s.top();
			sum-=top;cnt--;
			s.pop();
		}
	}
	cout<<cnt<<'\n';
}
