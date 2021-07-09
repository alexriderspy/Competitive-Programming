#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define sz(x) (ll)(x).size()
void solve(){
	ll n;
	cin>>n;
	vector<pair<ll,ll>>s;
	for(ll i=0;i<n;i++){
		ll tmp;cin>>tmp;
		s.push_back({tmp,i+1});
	}
	ll c=0,i=0,tmp1,tmp2;
    
	while(1){
		tmp1=5005,tmp2=5005;
		if(i<sz(s)-1 && ((s[i].first==1 && s[i+1].first==0) ||( s[i].first==0 && s[i+1].first==1))){
			tmp1=(abs(s[i].second-s[i+1].second));
        if(i>=1 && ((s[i].first==1 && s[i-1].first==0) ||( s[i].first==0 && s[i-1].first==1))){
            tmp2=(abs(s[i].second-s[i-1].second));
        }   
        if(tmp1<tmp2){
			c+=(abs(s[i].second-s[i+1].second));
            s.erase(s.begin()+i,s.begin()+i+2); i--;
            
        }else{
            c+=(abs(s[i].second-s[i-1].second));
            s.erase(s.begin()+i-1,s.begin()+i+1); i++;
        }
            for(int j=0;j<(sz(s));j++) {cout<<s[j].first<<' ';}
            cout<<'\n';
		}else{
			i++;
		}
        if(i>((sz(s))-1) || i<0) break;
	}
	cout<<c<<'\n';
}
int main()

{
    //ios_base::sync_with_stdio(false), cin.tie(0);
    //ll t;cin>>t;
    solve();
}

   
