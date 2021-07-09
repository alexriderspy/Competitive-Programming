#include<bits/stdc++.h>
using namespace std;

const int max_n=1e5;

vector<int> edges[max_n];
vector<int> Centroid(int n) {
        
        vector<int> centroid;
        vector<int> sz(n);
        function<void (int, int)> dfs = [&](int u, int prev) {
                sz[u] = 1;
                bool is_centroid = true;
                for (auto v : edges[u]) if (v != prev) {
                        dfs(v, u);
                        sz[u] += sz[v];
                        if (sz[v] > n / 2) is_centroid = false;
                }
                if (n - sz[u] > n / 2) is_centroid = false;
                if (is_centroid) centroid.push_back(u);
        };
        dfs(0, -1);
        return centroid;
}
void solve(){
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++) edges[i].clear();
    for(int i=0;i<n-1;i++){
        int a,b;cin>>a>>b;
        a--,b--;    
        edges[a].push_back(b);
        edges[b].push_back(a);
    }
    
    vector<int>centroid;
    centroid=Centroid(n);

    
    if(centroid.size()==1) {
        cout<<centroid[0]+1<<" "<<edges[centroid[0]][0]+1<<'\n';
        cout<<centroid[0]+1<<" "<<edges[centroid[0]][0]+1<<'\n';
        return;
    }
    int j=centroid[0],k=centroid[1];
    
    for(int i=0;i<edges[j].size();i++){
        int x=edges[j][i];
    
        if(x!=k) {
            cout<<j+1<<" "<<x+1<<'\n';
            cout<<k+1<<" "<<x+1<<'\n';return;
        }
    }
 
}
int main(){
    int t;cin>>t;
    while(t--) solve();
}   


