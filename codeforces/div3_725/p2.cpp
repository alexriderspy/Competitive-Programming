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
#define fu(i, m, n) for (int i = (m); i < (n); ++i)
#define pb push_back
#define YES cout<<"YES"<<'\n';
#define NO cout<<"NO"<<'\n'; 
#define sz(x) (int)(x).size()

void solve(){
	int n,sum=0;
	cin>>n;
	VI v(n,0);
    int f=0;
	fu(i,0,n) {
        cin>>v[i];
        
        sum+=v[i];
        if(i==0) continue;
        if(v[i]!=v[i-1]) f=1;
    }
    if(f==0){
        cout<<0<<'\n';return;
    }
    if(sum%n!=0){
        cout<<-1<<'\n';return;
    }
    int fvalue=sum/n;
    int k=0;
    for(int i=0;i<n;i++){
        if(v[i]>fvalue) k++; 
    }
    cout<<k<<'\n';
}
int main()

{
    //ios_base::sync_with_stdio(false), cin.tie(0);
    ll t;cin>>t;
    while(t--)
    solve();
}

   
