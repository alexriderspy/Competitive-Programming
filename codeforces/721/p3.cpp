#include<bits/stdc++.h>
using namespace std;

void ifpalin(int z){
    if(z%2==0){
        
        cout<<"BOB\n";return;
    }
    cout<<"ALICE\n";
}
void solve(){
    int n;cin>>n;
    string s;cin>>s;
    int z=0,np=0,f=0; //np ->non-palin zeroes, f->if s[n/2]is 0 or not
    if(n%2 && s[n/2]=='0') f=1;
    for(int j=0;j<n/2;j++) if(s[j]=='0' && s[n-1-j]!='0') np++;
    for(int i=0;i<n;i++) if(s[i]=='0') z++; 
    
    if(n==1) {
        cout<<"BOB\n"; return;
    }
    if(np==z) {cout<<"ALICE\n";return;}    
    //number of 0's odd->alice
    //even->bob
    //alice tries to make string palin with odd 0
    //bob ................................. even 0 
    
}

int main(){
    int t;cin>>t;
    while(t--) solve();
}