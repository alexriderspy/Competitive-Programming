#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin>>n;
    
    for(int i=31;i>=0;i--){
        if((1<<i) &n){
            cout<<(1<<i) - 1 <<'\n';return;
        }
    }
}

int main(){
    int t;cin>>t;
    while(t--) solve();
}