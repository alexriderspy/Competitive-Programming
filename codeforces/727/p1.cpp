#include<bits/stdc++.h>

using namespace std;

#define ll long long

void solve(){
    ll n,x,t;
    cin>>n>>x>>t;
    if(n==1) {
        cout<<0<<'\n';
        return;
    }
    ll sum=0;
    ll p=t/x,ax,a;
    if((n-1)*x>=t){
        ax=(n-1)*x-t;
        
        a=((ax+x-1)/x);
      

    }else{
        a=0;
    }
    sum+=(a)*p;
    if((n-1-a)>=0)
    sum+=((n-1-a)*(n-a))/2;
    cout<<sum<<'\n';
    
}
int main(){
    int t;cin>>t;
    while(t--) solve();
}