#include<bits/stdc++.h>
using namespace std;

#define ll long long
void solve(){
    int n;cin>>n;
    vector<ll>a(n);
    map<ll,ll>m;
    for(int i=0;i<n;i++) {
        cin>>a[i];
        
    }
    ll ans=0;
    vector<ll>dp(n);
    m[a[0]]=1;
    for(int i=1;i<n;i++){
        dp[i]=dp[i-1]+m[a[i]];
        m[a[i]]+=(i+1);
        ans+=dp[i];
    }
    
    cout<<ans<<'\n';
}

int main(){
    int t;cin>>t;
    while(t--) solve();
}