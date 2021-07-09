#include<bits/stdc++.h>

using namespace std;

void solve(){
    int a,b;cin>>a>>b;
    if(a<=b) cout<<b-a<<'\n';
    else{
        int j=(a+b-1)/b;
        cout<<b*j-a<<'\n';
    }
}
int main(){
    int t;cin>>t;
    while(t--) solve();
}