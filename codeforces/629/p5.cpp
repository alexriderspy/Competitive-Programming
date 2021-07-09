#include<bits/stdc++.h>

using namespace std;

const int N=2e5+1;
vector<int>edges[N];
vector<int>d(N);
vector<int>p(N); //parent
int T;
vector<int>tin(N),tout(N);
void dfs(int u,int parent=-1,int depth=0){
    p[u]=parent;
    d[u]=depth;
    tin[u]=T++;
    for(auto v:edges[u]){
        if(v!=parent){
            dfs(v,u,depth+1);
        }
    }
    tout[u]=T++;
}

int isAnc(int u,int v){  //is u ancestor of v?
    return tin[u]<=tin[v] && tout[u]>=tout[v];
}
void solve(){
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n-1;i++){
        int a,b;
        cin>>a>>b;
        edges[a].push_back(b);
        edges[b].push_back(a);
    }
    T=0;
    dfs(1);
    while(m--){
        int k;cin>>k;
        vector<int>v(k);
        for(auto &x:v) cin>>x;
        //find the deepest vertex, the others have to lie on this path
        //or be at a distance 1, otherwise
        //deepest one would always be left out hence NO
        int u=v[0];
        for(auto it:v){
            if(d[it]>d[u]) u=it;
        }
        //now replace every vertex with its parent, then parent lies on
        //the path, obv
        //we can check if vertex lies in the path from root to that deepest
        //vertex u
        for(auto &it:v) {
            if(p[it]!=-1) it=p[it];
        }
        //to check if vertex u is parent of v, simply see if 
        //tin[u]<=tin[v] && tout[u]>=tout[v], since vertex can be parent of itself
        int ok=1;
        for(auto it:v){
            if(it==u) continue;
            ok&=isAnc(it,u);

        }
        if(ok) cout<<"YES\n";
        else cout<<"NO\n";
    }
}

int main(){solve();}