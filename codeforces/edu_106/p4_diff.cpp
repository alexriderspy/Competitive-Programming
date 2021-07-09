#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define vi vector<ll>
#define pb push_back
#define F first
#define S second
#define all(v) (v).begin(),(v).end()
#define pii pair<ll,ll>
#define vii vector<pii>
#define calc_fact(n) tgamma(n+1)
#define inf LONG_LONG_MAX
#define MOD 1000000007
#define mod 998244353

const ll N = 2e7;
vi spf(N+1,0);

void generate()
{
    for(ll i=3;i*i<=N;i+=2)
    {
        if(spf[i]==i)
        {
            for(ll j=i*i;j<=N;j+=i)
            {
                if(spf[j]==j)spf[j]=i;
            }
        }
    }
}

ll get_ans(ll c,ll d,ll r)
{
    ll num = r + d;
    
    if(num%c)return 0;
    
    r = num/c;
    
    // now we need to find number of pairs (A,B) = r such that A,B are coprime
    
    ll cnt = 0;
    
    while(spf[r]!=1)
    {
        cnt++;
        ll val = spf[r];
        
        while(spf[r]==val)r/=spf[r];
    }
    
    return (1LL<<cnt);
    
}

ll solve()
{
    ll c,d,x,ans=0;
    cin>>c>>d>>x;
    
    // get the factors of x in O(sqrt(x)) time
    
    for(ll i=1;i*i<=x;i++)
    {
        if(x%i)continue;
        
        ll RHS = x/i;
        
        ans+=get_ans(c,d,RHS);
        
        if(i*i!=x)
        {
            ans+=get_ans(c,d,i);
        }
    }
    
    return ans;
    
    
}

signed main()
{
	FIO;
	
	// generating smallest prime factor for every number till 10^7
	
	for(ll i=0;i<=N;i++)spf[i]=i;
	for(ll i=2;i<=N;i+=2)spf[i]=2;
	
	generate();
	
	ll t;
	cin>>t;
	while(t--)
	{
	    cout<<solve()<<endl;
	}
}  	