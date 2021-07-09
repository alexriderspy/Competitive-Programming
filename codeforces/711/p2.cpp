#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n,m;
    cin>>n>>m;
    int max=ceil(m/2.0);    //count[i]>max no
    vector<vector<int>>a;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        for(int j=0;j<temp;j++){
            int te;
            cin>>te;
            a[i].push_back(te);
        }
    }
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}