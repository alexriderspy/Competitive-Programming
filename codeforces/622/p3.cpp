#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    int n;cin>>n;
    vector<int>l(n);
    for(auto &i:l) cin>>i;
    vector<vector<int>>dp(n, vector<int>(n));
    //one of them we need to have at max height

//tried to check which one is my peak, can be any
    for(int i=0;i<n;i++) dp[i][i]=l[i];
    for(int i=0;i<n;i++){
        for(int j=i-1;j>=0;j--){
            dp[i][j]=min(dp[i][j+1],l[j]);
        }
        for(int k=i+1;k<n;k++){
            dp[i][k]=min(dp[i][k-1],l[k]);
        }
    }
    vector<ll>sum(n);
    for(int i=0;i<n;i++){
        sum[i]=accumulate(dp[i].begin(),dp[i].end(),0LL);
    }
    int pnt=max_element(sum.begin(),sum.end())-sum.begin();
    for(int i=0;i<n;i++) cout<<dp[pnt][i]<<" ";
    cout<<'\n';
}

int main(){
    solve();
}