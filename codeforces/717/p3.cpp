#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve(){
    int n;    cin>>n;
    vector<int>a(n+1);
    int sum=0,codd=0,oddindex;
    for(int i=0;i<n;i++) {
        int x;cin>>x;a[i]=x;
        sum+=x;
        if(x%2) codd++,oddindex=i+1;
    }
    if(sum%2!=0){
        cout<<0<<'\n'; return;
    }
    sum=sum/2;
    vector<vector<int>>dp(n+1,vector<int>(sum+1,0));
    
    //dp state-> dp[i][x]-> can we have sum=x till we reach index i
    //so answer= dp[n-1][sum]
    dp[0][0]=1;
    //1d dp wont work since 
    for(int i=1;i<=n;i++){
        for(int j=0;j<=sum;j++){
            if(j>=a[i])
            dp[i][j]=max(dp[i-1][j],dp[i-1][j-a[i]]);
            else 
            dp[i][j]=dp[i-1][j];
        }
    }
 //   for(int i=0;i<=sum;i++) cout<<dp[i]<<" ";
    if(dp[n][sum]){
        
        
            int pos=31,minindex;
            for(int i=0;i<n;i++){
                for(int j=0;j<=31;j++){
                    if((1<<j)&a[i]){
                        if(j<pos){
                            pos=j,minindex=i+1;
                        }
                        break;
                    }
                }
            }
            cout<<1<<'\n'<<minindex<<'\n';
        }
    
    else{
        cout<<0<<'\n';return;
    }
    
}

int main(){
    solve();
}