#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,c0,c1,h;
    cin>>n>>c0>>c1>>h;
    string s;cin>>s;
    int cnt0=0,cnt1=0;
    
    for(int i=0;i<n;i++){
        if(s[i]=='0') cnt0++;
        else cnt1++;
    }
    int cost=0;
    cost=c0*cnt0+c1*cnt1+h*0;
    int mincost=cost;
    for(int i=1;i<=cnt0;i++){
        cost=c0*(cnt0-i)+c1*(cnt1+i)+h*i;
        mincost=min(mincost,cost);
    }
    for(int i=1;i<=cnt1;i++){
        cost=c0*(cnt0+i)+c1*(cnt1-i)+h*i;
        mincost=min(mincost,cost);
    }
    cout<<mincost<<'\n';
}

int main(){
    int t;cin>>t;
    while(t--) solve();
}