#include<bits/stdc++.h>

using namespace std;
typedef vector<int> VI;
typedef vector<vector<int> > VVI;
typedef vector<string> VS;
typedef vector<vector<string> > VVS;
typedef signed long long i64;
typedef unsigned long long u64;

#define pi pair<int, int>
#define mod 1000000007
#define ll long long
#define ld long double
#define fu(i, m, n) for (ll i = (m); i < (n); ++i)
#define pb push_back
#define YES cout<<"YES"<<'\n';
#define NO cout<<"NO"<<'\n'; 
#define sz(x) (int)(x).size()

void solve(){
	int n;
	cin>>n; 
	VI v,a;
	for(int i=0;i<n;i++) {
        int tmp;
        cin>>tmp;
        if(tmp%2==0){
            a.push_back(tmp);
        }
        else{
            v.push_back(tmp);
        }
    }
    ll sum=0;
    for(int j=0;j<sz(a);j++){
        sum+=(n-1-j);
    }
    for(int i=0;i<sz(v);i++){
        for(int j=i+1;j<sz(v);++j){
            if(__gcd(v[i],v[j])>1){
                sum++;
            }
        }
    }
	cout<<sum<<'\n';
}
int main()

{
    //ios_base::sync_with_stdio(false), cin.tie(0);
    int t;cin>>t;
    while(t--)
    solve();
}

   
