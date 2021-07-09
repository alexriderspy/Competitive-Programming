#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin>>n;
    string s;cin>>s;
    int z=0;
    for(int i=0;i<n;i++) if(s[i]=='0') z++; 
    if(z%2==0){
        
        cout<<"BOB\n";return;
    }
    if(z==1) cout<<"BOB\n";
    else
    cout<<"ALICE\n";

}

int main(){
    int t;cin>>t;
    while(t--) solve();
}