#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;cin>>n>>k;
    vector<int>a(n*k+1);
    for(int i=1;i<=n*k;i++) cin>>a[i];
    long long maxsum=0;
    int cnt=0;
    for(int i=n*k-(n+2)/2+1;i>=0 && cnt<k;i-=(n+2)/2){
        maxsum+=a[i];
        cnt++;
    }
    cout<<maxsum<<'\n';
}
int main(){
    int t;cin>>t;
    while(t--)solve();
}