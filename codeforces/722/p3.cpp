#include<bits/stdc++.h>
using namespace std;

#define ll long long

const int N=1e5;
vector<int>edges[N];
vector<vector<ll>>dp(N,vector<ll>(2,0));

//why should av=lv or rv
//see editorial
//a contains a[v][0]->lv, 1 -> rv
vector<vector<ll>>a(N,vector<ll>(2,0));


//dp[v][0] denotes max beauty from bottom of tree till vertex v if i take av as
//lv, and dp[v][1] -> if we take av as rv,
//since we k at every point we will take either the av = lv or rv but dont know 
//which, so we use dp[v][0] and dp[v][1] at every state

void dfs(int u,int parent){
    for(auto v:edges[u]){
        if(v!=parent){
            dfs(v,u);
            dp[u][0]+=max(dp[v][0]+abs(a[u][0]-a[v][0]),dp[v][1]+abs(a[u][0]-a[v][1]));
            dp[u][1]+=max(dp[v][0]+abs(a[u][1]-a[v][0]),dp[v][1]+abs(a[u][1]-a[v][1]));        
        }
    }
    
}
void solve(){
    int n;cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i-1][0]>>a[i-1][1];
    }
    for(int i=0;i<n;i++) {
        edges[i].clear();
        dp[i][0]=dp[i][1]=0;
    }
    for(int i=1;i<=n-1;i++){
        int a,b;cin>>a>>b;
        a--,b--;
        edges[a].push_back(b);
        edges[b].push_back(a);
    }
    dfs(0,-1);
    cout<<max(dp[0][0],dp[0][1])<<'\n';
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t;cin>>t;
    while(t--) solve();
}