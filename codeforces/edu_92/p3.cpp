//small constraints hint you have to iterate over them

#include<bits/stdc++.h>

using namespace std;

void solve(){
	string s,tmp;
	cin>>s;
	
	int maxi=0,val=0;
	for(int i=0;i<=9;i++){
		for(int j=0;j<=9;j++){
			val=0;
			char ch1=i+'0',ch2=j+'0';
			if(ch1==ch2){
				for(int k=0;k<(int)s.size();k++){
					if(s[k]==ch1) val++; 
				}
				maxi=max(maxi,val);
			}else{
				int f=0;
				for(int k=0;k<(int)s.size();k++){
					if(s[k]==ch1 && f==0) val++,f=1;
					if(s[k]==ch2 && f==1) val++,f=0;
				}
				if(val%2) val--;
				maxi=max(maxi,val);
			}
			
		}
	}
	cout<<(int)s.size()-maxi<<'\n';
	
	
}
int main(){
	int t;cin>>t;
	while(t--) solve();
}
