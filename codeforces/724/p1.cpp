#include<bits/stdc++.h>
using namespace std;

#define ll long long
void solve(){
    int n;cin>>n;
    vector<ll>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<min((int)a.size(),400);i++){
        for(int j=i+1;j<min((int)a.size(),400);j++){
            if(find(a.begin(),a.end(),abs(a[j]-a[i]))==a.end()){
                if(abs(a[i]-a[j]) >1000000000) {
                    cout<<"No\n";return;
                }
                a.push_back(abs(a[i]-a[j]));
            }
        }
    }
    if(a.size()>300) cout<<"No\n";
    else {
        cout<<"Yes\n";
        cout<<a.size()<<'\n';
        for(int i=0;i<(int)a.size();i++) cout<<a[i]<<' ';
        cout<<'\n';
    }
}

int main(){
    int t;cin>>t;
    while(t--) solve();
}