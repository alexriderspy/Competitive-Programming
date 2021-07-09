#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n;cin>>n;
    string s;
    cin>>s;
    int f=0;
    vector<char>a(n),b(n);
    for(int i=0;i<n;i++){
        if(s[i]=='2') {
            if(f==0)
            a[i]='1',b[i]='1';
            else a[i]='0',b[i]='2';
        }
        else if(s[i]=='0') a[i]='0',b[i]='0';
        else {
            if(f==0) a[i]='1',b[i]='0',f=1;
            else a[i]='0',b[i]='1';
        }
    }
    for(auto ch:a) cout<<ch;cout<<'\n';
    for(auto ch:b) cout<<ch;cout<<'\n';

}

int main(){
    int t;cin>>t;
    while(t--) solve();
}