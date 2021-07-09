#include<bits/stdc++.h>

using namespace std;
int main(){
	string s;cin>>s;
	int n=(int)s.size();
	vector<char>ans(n,'#'); 
	vector<int>pos(26,0);
	pos[25]=n-1;int f=0;
	if(n<26) cout<<-1<<'\n';
	else{
		
		for(int l=24;l>=0;l--){
			f=0;
			for(int i=pos[l+1]-1;i>=l;i--){
				if(s[i]<= ('a'+l)) {
					pos[l]=i; f=1;
					break;
				}
			}if(f==0){
				cout<<-1<<'\n'; return 0;
			}
		}
		for(int i=0;i<26;i++){
			ans[pos[i]]='a'+i;
		}
		for(int i=0;i<n;i++){
			if(ans[i]=='#') ans[i]=s[i];
		}
		
	for(int i=0;i<n;i++) cout<<ans[i];
	cout<<'\n';
	}
}
