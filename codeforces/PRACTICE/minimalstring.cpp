#include<bits/stdc++.h>

using namespace std;
int main(){
	string s;
	cin>>s;
	stack<char>t;
	string u="";
	int n=s.length();
	vector<int>cnt(26,0);
	vector<int>index;
	for(int i=0;i<n;++i){
		int ch=s[i]-'a';
		cnt[ch]++;
		index.push_back(ch);
	}
	sort(index.begin(),index.end());
	int j=0;
	for(int i=0;i<n;++i){
		
		int f_index=index[j];
		char ch=f_index+'a';
		if(ch!=s[i]){
			t.push(s[i]);
		}
		else{
			u+=ch;
			cnt[f_index]--;
			if(cnt[f_index]==0) j++;
			
		}
	}
	while(!t.empty()){
		char ch=t.top();
		t.pop();u+=ch;
	}
	cout<<u<<'\n';
}
