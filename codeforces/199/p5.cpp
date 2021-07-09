#include<bits/stdc++.h>
using namespace std;
//red=0 , blue=1
const int MAX_N=1e5+1;
vector<int>color(MAX_N);
vector<int>edges[MAX_N];
int query(int u,int parent){
    if(color[u]==0) return 0;
    
    int dist=1e5+6;
    for(int v:edges[u]){
        if(v!=parent){
            dist=min(dist,query(v,u));
        }
    }
    return dist+1;
}
void update(int u){
    color[u]=0;
}

void solve(){
    int n,m;cin>>n>>m;
    for(int i=2;i<=n;i++) color[i]=1;
    color[1]=0;
    for(int i=1;i<=n-1;i++){
        int a,b;cin>>a>>b;
        edges[a].push_back(b);
        edges[b].push_back(a);
    }
    while(m--){
        int t,u;
        cin>>t>>u;
        if(t==1){
            update(u);
        }else{
            cout<<query(u,-1)<<'\n';
        }
    }
}
int main(){
    solve();
}