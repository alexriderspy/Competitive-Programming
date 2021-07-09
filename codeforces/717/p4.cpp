#include<bits/stdc++.h>

using namespace std;

#define ll long long 

void solve(){
    int n,q;
    cin>>n>>q;
    vector<int>a(n);
    for(auto x:a) cin>>x;
    while(q--) {
        int l,r;
        l--,r--;
        cout<<get_ans(l,r)<<'\n';
    }
}
int main(){
    
    solve();
}