#include<bits/stdc++.h>
using namespace std;

#define ll long long
void solve(){
    int n;
    cin>>n;
    vector<ll>a(n),pref(n+1);
    
    for(int i=0;i<n;i++) {
        cin>>a[i];
        pref[i+1]=pref[i]+a[i];
    }
    
    ll ans=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(pref[j+1]-pref[i]==0LL){
                
                ans++;i=j-1;
                
                break;
            }
        }
    }
    
    cout<<ans<<'\n';
}
int main(){
    solve();
}