#include<bits/stdc++.h>

using namespace std;

#define ll long long 

void solve(){
    ll n,k;
    cin>>n>>k;
    if(n%2==0){
        cout<<n/2<<" "<<1<<" "<<n/2-1<<endl;
    }
    else{
        cout<<n/2<<" "<<n-n/2-1<<" "<<1<<endl;
    }
}
int main(){
    ll t;
    cin>>t;
    while(t--)
    solve();
}