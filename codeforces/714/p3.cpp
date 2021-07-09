#include<bits/stdc++.h>
using namespace std;

//calculate dp table earlier

#define ll long long
const ll M = 2e5;
const ll mod=1e9+7;
vector<ll>dp(M+1);

//why? dp[i]=dp[i-10]+dp[i-9]
//observation: every digit [0-8] contributes exactly 1 more digit, digit 9
//gives 2 more digits after 10 operations 
//so at every step we count the length of string based on what happened 
//before 10 moves, simply count the number of 9's in that string before 10 moves
//which is ez since no. of 9's = no of digits in (x+1 )th op - xth op
//dp[i]=dp[i-10]*2 +dp[i-9]-dp[i-10]
void make(){
    for(int i=0;i<=8;i++) dp[i]=2;
    dp[9]=3;
    for(int i=10;i<=M;i++) dp[i]=dp[i-10]%mod+dp[i-9]%mod,dp[i]=dp[i]%mod;
}
void solve(){
    int n,m;
    cin>>n>>m;
    ll ans=0;
    int mn=0;
    while(n){
        int d=n%10;
        mn=10-d;
        if(m<mn){
            ans++;
            ans=ans%mod;
        }else{
            ans+=dp[m-mn];
            ans=ans%mod;
        }
        n/=10;
        
    }
    cout<<ans<<'\n';
}

int main(){
    make();
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t;cin>>t;
    while(t--) solve();
}