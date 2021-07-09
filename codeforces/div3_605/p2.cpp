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
#define YES cout<<"YES"<<endl;
#define NO cout<<"NO"<<endl; 


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

void solve(){
    string s;
    cin>>s;
    int n=s.size();
    int l=0,r=0,u=0,d=0;
    
    for(int i=0;i<n;i++){
        switch (s[i])
        {
        case 'L':
            l++;
            break;
        case 'R':
            r++;
            break;
        case 'U':
            u++;
            break;
        case 'D':
            d++;
            break;
        
        default:
            break;
        }
    }
    if((u==0 || d==0) && (l==0 || r==0)){
        cout<<0<<"\n";return;
    }
    if(u!=0 && d!=0 &&(l==0 || r==0)){
        cout<<2<<"\n";
        cout<<"UD"<<"\n"; return;
    }
    if(l!=0 && r!=0 &&(u==0 || d==0)){
        cout<<2<<"\n";
        cout<<"LR"<<"\n"; return;

    }
    int f=0;
    cout<<2*(min(l,r)+min(u,d))<<"\n";
    for(int i=0;i<min(l,r);i++){
        cout<<"L";
    }
    for(int i=0;i<min(u,d);i++){
        cout<<"U";
    }
    for(int i=0;i<min(l,r);i++){
        cout<<"R";
    }
    for(int i=0;i<min(u,d);i++){
        cout<<"D";
    }
    cout<<"\n";
}
int main()

{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll t;cin>>t;
    while(t--)
    solve();
}

   
