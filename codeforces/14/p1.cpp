#include<bits/stdc++.h>

using namespace std;
typedef vector<int> VI;
typedef vector<vector<int>> VVI;
typedef vector<string> VS;
typedef vector<vector<string>> VVS;
typedef signed long long i64;
typedef unsigned long long u64;

#define pi pair<int, int>
#define mod 1000000007
#define ll long long
#define ld long double
#define fu(i, m, n) for (ll i = (m); i < (n); ++i)
#define fr(i, S, E) for (typeof(E) i = (S); i != (E); ++i)
#define pb push_back
#define all(x) (x).begin(), (x).end()

ll fact(ll n){
    ll p=1;
    for(ll k=1;k<=n;k++){
    p*=k;
    p=p%mod;
    }
    p=p%mod;
    return p;

}

ll power(ll n, ll k){
    ll p=1;
    while(k--){
        p*=n;
    }
    return p;
}


bool cmp(pair<ll, ll> a, pair<ll, ll> b) {return a.second < b.second;}

int main()

{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    vector<ll>a,sum;
    ll t;cin>>t;
    while(t--)
    {
        int i,flag=0,n,x;cin>>n>>x;
        VI a;
        fu(i,0,n){
            int tm;
            cin>>tm;
            a.push_back(tm);
        }
        sort(a.begin(),a.end());
        VI sum(n+1);
        sum[0]=a[0];
        for(i=1;i<n;i++){
            sum[i]=sum[i-1]+a[i];
            if(sum[i]==x){
                flag=1;break;
            }
        }
        if((i>=(n-1) && flag==1)||(n==1 && sum[0]==x)) {
            cout<<"NO"<<endl;continue;
        } 
        if(flag==1)
        {
            //cout<<flag<<" ";
            swap(a[i],a[i+1]);
        }
        if(sum[0]==x){
            swap(a[0],a[1]);
        }
        cout<<"YES"<<endl;
        fu(i,0,n){
            //cout<<sum[i]<<" ";
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}

   
