#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,m;cin>>n>>m;
    
    int f=0;
    for(int i=0;i<n;i++){
        int a,b,c,d;cin>>a>>b>>c>>d;
        if(b==c) f=1;
    }
    if(m%2){
        cout<<"NO\n";return;
    }
    if(f) cout<<"YES\n";
    else cout<<"NO\n";
}
int main(){
    int t;cin>>t;
    while(t--) solve();
}