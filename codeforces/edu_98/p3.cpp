#include<bits/stdc++.h>

using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--)
	{
		string s; cin>>s;
		int ans=0;
		stack<char>b1,b2;
		int n=(int)s.size();
		for(int i=0;i<n;i++){
			if(s[i]=='(') b1.push(s[i]);
			if(s[i]=='[') b2.push(s[i]);
			if(s[i]==')' && !b1.empty()) {
			ans++; b1.pop();}
			if(s[i]==']' && !b2.empty()) {
			ans++; b2.pop();} 
		}
		cout<<ans<<'\n';
	}
	
}
