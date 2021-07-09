#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll factors(int a){
    ll num=0;
    while(a%2==0){
        num++;a/=2;
    }
    for(int i=3;i*i<=a;i+=2){
        while(a%i==0){
            num++;a/=i;
        }
    }
    if(a>1) num++;
    return num;
}
int main(){
    int tt;cin>>tt;
    while(tt--){
        int a,b,k;
        cin>>a>>b>>k;
        int p=max(a,b),q=min(a,b);
        
        if(p%q==0 && p!=q && k==1) {
            cout<<"YES"<<'\n'; continue;
        } 
        if(factors(p)+factors(q)>=(ll)k && k!=1){
            cout<<"YES"<<'\n'; continue;
        }
        else cout<<"NO"<<'\n';
    }
}