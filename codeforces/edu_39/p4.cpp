#include<bits/stdc++.h>

using namespace std;
int main(){
	int n;int a=0;
	for(int i=0;i<n;i++){
		int tmp;cin>>tmp;
		if(tmp>0) a+=tmp;
		if(tmp<0) a-=tmp; 
	}
	cout<<a<<'\n';
}
