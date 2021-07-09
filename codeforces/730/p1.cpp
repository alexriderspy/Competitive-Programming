#include<bits/stdc++.h>
using namespace std;

#define ll long long
void solve(){
    ll a,b;cin>>a>>b;
    if(a>b) swap(a,b);
    if(a==b){
        cout<<"0 0\n";return;
    }
        ll g=b-a;
        ll i=1LL;
        while(i*g <a){
            
            i++;
        }
        
        ll moves=min(i*g-a,a-(i-1)*g);
        if(moves>a){
            cout<<g<<" "<<a<<'\n';return;
        }
        cout<<g<<" "<<moves<<'\n';
    
}

int main(){
    int t=1;
    cin>>t;
    while(t--) solve();
}