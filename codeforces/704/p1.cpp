#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double
ll mini(ll a,ll b)
{
	return a<b?a:b;
}
ll mini(ll a,ll b,ll c)
{
	return mini(mini(a,b),c);
}
signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int t;
	cin>>t;
	while(t--)
	{
		ll p,a,b,c;
		cin>>p>>a>>b>>c;
		
	//	cout<<ceil(double(p)/a)<<" "<<ceil(double(p)/b)<<" "<<ceil(double(p)/c)<<endl;
		ll ans=mini(ceil((ld)(p)/a)*a,ceil((ld)(p)/b)*b,ceil((ld)(p)/c)*c)-p;
		cout<<ans<<endl;
		
	}
}

