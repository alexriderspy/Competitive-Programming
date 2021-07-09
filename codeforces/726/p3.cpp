#include<bits/stdc++.h>

using namespace std;

#define ll long long
void solve(){
    int n;
    cin>>n;
    vector<ll>v(n,0);
    for(auto &x:v) cin>>x;
    sort(v.begin(),v.end());
    int pos=0,minval=v[1]-v[0];
    for(int i=1;i<n-1;i++){
        if(v[i+1]-v[i] <minval){
            minval=v[i+1]-v[i];
            pos=i;
        }
    }
    
    for(int i=pos;i<n;i++){
        if(i==pos+1) continue;
        cout<<v[i]<<" ";
    }
    for(int i=0;i<pos;i++){
        cout<<v[i]<<" ";
    }
    cout<<v[pos+1]<<" ";
    cout<<'\n';
}
int main(){
    int t;
    cin>>t;
    while(t--) solve();
}