#include<bits/stdc++.h>

using namespace std;

#define ll long long int 
    vector<ll>a;
ll dp[2001][2001];
ll ans(ll l, ll r){
    if(dp[l][r]!=-1) return dp[l][r];
    if(l==r) return 0;
    dp[l][r]=(a[r]-a[l]);
    dp[l][r]+=min(ans(l+1,r),ans(l,r-1));
    return dp[l][r];
}
void solve(){
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        a.push_back(temp);
    }
    sort(a.begin(),a.end());

    memset(dp,-1,sizeof(dp));
    cout<<ans(0,n-1)<<endl;

}
int main(){
    int t;
    //cin>>t;
   solve();
}