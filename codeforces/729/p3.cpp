#include<bits/stdc++.h>
using namespace std;

#define ll long long
const ll mod=1e9+7;

ll gcd(int a,int b){
    return __gcd(a,b);
}
ll lcm(int a,int b){
    return (a*b)/gcd(a,b);
}
void solve(){
    ll n;cin>>n;
    
    ll ans=0LL;
    
    //f(i)=x -> x is min positive integer not divisor of i
    //so 1..x-1 should be divisible, lcm(1,2,3,...x-1) should divide x
    //thus all multiples of lcm <=n should be answer - all where lcm(1,2,..x)
    
    ll l=1LL,next,tmp;
    for(int i=2LL;l<=n;i++){
        
        next=lcm(l,i);
        tmp=(n/l - n/next) %mod;
        tmp=(tmp*i)%mod;
        ans=(ans+tmp)%mod;
        ans=ans%mod;
        l=next;
    }

    cout<<ans<<'\n';
}
int main(){
    int t;
    cin>>t;
    while(t--) solve();
}