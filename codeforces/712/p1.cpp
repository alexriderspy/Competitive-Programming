#include<bits/stdc++.h>

using namespace std;

#define ll long long 

void solve(){
    string s;
    cin>>s;
    int n=s.size();
    for(int i=0;i<n;i++){
        if(s[i]!='a'){
            s.insert(s.begin()+n-i,'a');
            cout<<"Yes"<<endl;
            cout<<s<<endl;return;
        }
    }
    cout<<"No"<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--)
    solve();
}