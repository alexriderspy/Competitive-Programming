#include<bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
const int N=1001,K=1001;
int dp[N][K][2];
int n,k;
int solve(int curr,int k,int dir){
    if(k==1) return 1;
    if(dp[curr][k][dir]!=-1) 
    {
        return dp[curr][k][dir];
    } 
    int ans=2;  // me and my copy
    if(dir==1){
        if(curr<n){
            ans+=solve(curr+1,k,dir)-1;
        }
        ans%=MOD;
        if(curr>1){
            ans+=solve(curr-1,k-1,1-dir)-1;
        }
        ans%=MOD;
        dp[curr][k][dir]=ans;
        
    }
    else{
        if(curr>1){
            ans+=solve(curr-1,k,dir)-1;
        }
        ans%=MOD;
        if(curr<n){
            ans+=solve(curr+1,k-1,1-dir)-1;
        }

        ans%=MOD;
        dp[curr][k][dir]=ans;
        

    }
    return ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>k;
        memset(dp,-1,sizeof(dp));
        
        cout<<solve(1,k,1)<<endl;
    }
}