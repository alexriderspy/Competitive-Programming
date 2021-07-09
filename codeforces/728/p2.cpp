#include<bits/stdc++.h>

using namespace std;

#define ll long long
void solve(){
    int i,n;
    cin>>n;
    vector<int>v(n+1,0);
    for(int i=1;i<=n;i++) cin>>v[i];
    ll ans=0;
    for(int i=1;i<=n;i++){
        for(int k=1;k*v[i]<=2*n;k++){
            int j=k*v[i]-i;
            if(j>i && j<=n && v[j]==k) ans++;
        }
        
    }
    cout<<ans<<'\n';
}
int main(){
    int t;
    cin>>t;
    while(t--) solve();
}