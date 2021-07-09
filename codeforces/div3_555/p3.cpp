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
    int n;
    cin>>n;
    vector<int>a,c;
    vector<char>d;
    for(int i=0;i<n;i++){
        int tmp;
        cin>>tmp;
        a.push_back(tmp);
    }
    c.push_back(0);
    
    vector<int>b(a.rbegin(),a.rend());
   // fu(i,0,n) cout<<b[i]<<" ";
   int i=0,j=n-1;
   while(i<=j){
       if(max(a[i],a[j])<c.back()) break;
        if(a[j]<a[i]){
        if(a[j]>c.back()){
            d.push_back('R');
            c.push_back(a[j]);j--;
        }else{
            d.push_back('L');
            c.push_back(a[i]);i++;

        }

    }
        else{
           if(a[i]>c.back()){
            d.push_back('L');
            
           c.push_back(a[i]);i++;
        }else{
            d.push_back('R');
           c.push_back(a[j]);j--;

        }
    
   }
}
   int h=d.size();
   cout<<h<<"\n";
   for(char ch:d){
       cout<<ch;   }
    cout<<"\n";
}
int main()

{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    //ll t;cin>>t;
    solve();
}

   


