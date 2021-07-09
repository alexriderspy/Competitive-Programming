#include<bits/stdc++.h>
using namespace std;

#define ll long long
void solve(){
    int n;cin>>n;
    vector<ll>a(n);
    ll sum=0;
    for(int i=0;i<n;i++) {
        cin>>a[i];
        sum+=a[i];
    }
    ll q=sum/n;
    ll d=sum-n*q;
    ll ans=0;
    ans+=(d*(n-d));
    cout<<ans<<'\n';
}

int main(){
    int t=1;
    cin>>t;
    while(t--) solve();
}