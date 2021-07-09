#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
void solve(){
    ll n;cin>>n;
    if(n==1) {
        cout<<0<<'\n'; return;
    }
    ll d=(ll)sqrt(n);
    if(d*d==n){
        cout<<2*d-2<<'\n';return;
    }
    if(d*(d+1)>=n){
        cout<<2*d-1<<'\n';return;
    }
    cout<<2*d<<'\n';
}

int main(){
    int t;cin>>t;
    while(t--) solve();
}