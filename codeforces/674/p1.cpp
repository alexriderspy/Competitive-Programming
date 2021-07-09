#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,x;cin>>n>>x;
    if(n==1 || n==2) {
        cout<<1<<'\n';return;
    }
    
    int a=(n-3)/x;
    cout<<a+2<<'\n';
}
int main(){
    int t;cin>>t;
    while(t--) solve();
}