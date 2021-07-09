#include<bits/stdc++.h>
using namespace std;

#define ll long long
void solve(){
    int l,r;cin>>l>>r;
    ll ans=0;
    int dig=0;
    int m=r;
    while(m){
        dig++;
        m/=10;
    }
    int n=1;
    for(int i=1;i<=dig;i++){
        ans+=r/n- l/n;
        n*=10;
    }
    cout<<ans<<'\n';
}

int main(){int t;cin>>t;while(t--) solve();}