#include<bits/stdc++.h>

using namespace std;

#define ll long long 

ll power(ll val,ll exp){
    ll prod=1;
    while(exp--){
        prod*=val;
    }
    return prod;
}
void solve(){
    ll n,i=0,c=0;
    cin>>n;
    while(n>0){
        if((15-i)<1)break;
        ll a=(205*(power(10,15-i)));
        c+=n/a;
        n=n%a;
        
        i++;
    }
    if(n!=0){
        cout<<-1<<endl;
    }
    else{
        cout<<c<<endl;
    }
    
}
int main(){
    int t;
    cin>>t;
    while(t--)
    solve();
}