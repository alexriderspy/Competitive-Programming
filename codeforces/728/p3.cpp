#include<bits/stdc++.h>

using namespace std;

#define ll long long

void solve(){
    int n;
    cin>>n;
    vector<ll>v(n+1,0);
    for(int i=1;i<=n;i++) cin>>v[i];
    sort(v.begin(),v.end());
    ll cost=0;
    if(n<=2) cout<<cost<<'\n';
    else{
        vector<ll>prefix(n+1,0);
        prefix[1]=v[1];
        for(int j=2;j<=n;j++){
            prefix[j]=prefix[j-1]+v[j];
        }
        for(int k=3;k<=n;k++){
            cost+=(k-2)*v[k];
            cost-=prefix[k-2];
        }
        if(v[3]==v[2]){
            int k=3;
            while(k<=n && v[k]==v[2]){
                cost-=v[k]; k++;
            }
        }
        if(cost==0) cout<<0<<'\n';
        else
        cout<<"-"<<cost<<'\n';
    }
}
int main(){
    int t;
    cin>>t;
    while(t--) solve();
}