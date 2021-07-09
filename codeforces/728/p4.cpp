#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>adj[n+1];
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
        
}