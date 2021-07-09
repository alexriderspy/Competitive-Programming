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
vector<pair<int,int>>a;

int maxin(int l,int r){
    int pos=l;
    for(int i=l+1;i<=r;i++){
        if(a[i].first>a[pos].first){
            pos=i;
        }
    }
    
    return pos;
}
void depth(int l,int r,int d){
    if(l>r) return;
    int maxi=maxin(l,r);
    a[maxi].second=d;
    depth(l,maxi-1,d+1);
    depth(maxi+1,r,d+1);
}

void solve(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int tmp;
        cin>>tmp;
        a.push_back({tmp,0}); //val,depth
    }
   
    depth(0,n-1,0);
    for(int i=0;i<n;i++){
        cout<<a[i].second<<" ";
    }
    cout<<"\n";
    a.clear();
}
int main()

{
    //ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int t;cin>>t;
    while(t--)
    solve();
}

   
