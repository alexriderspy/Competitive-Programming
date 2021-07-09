#include<bits/stdc++.h>

using namespace std;
#define ll long long
int main(){
	ll a,b;
	cin>>a>>b;
	while(a!=0 && b!=0 ){
		if(a>=2*b)
		{
			ll val=a/b,pos,i;
			val/=2;
			
			a=(a-(val*2*b));
			if(a==0) break;
		}
		else{
			if(b<2*a) break;
			ll val=b/a,pos,i;
			val/=2;
			b=(b-(val*2*a));
			//cout<<b<<' ';	
			if(b==0) break;
			
		}
	}
	cout<<a<<' '<<b<<'\n';
}
