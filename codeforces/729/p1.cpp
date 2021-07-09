#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>a(2*n);
    int codd=0,ceven=0;
    for(int i=0;i<2*n;i++){
        cin>>a[i];
        if(a[i]%2) codd++;
        else ceven++;
    }
    if(codd==ceven) cout<<"Yes\n";
    else cout<<"No\n";
}
int main(){
    int t=1;
    cin>>t;
    while(t--) solve();
}