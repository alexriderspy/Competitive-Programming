#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>v(n,0);
    for(auto &x:v) cin>>x;
    long long int sum=0;
    int ans=0;
    for(int i=0;i<n;i++) sum+=v[i];
    if(sum<n) cout<<1<<'\n';
    else{
        cout<<sum-n<<'\n';
    }
}
int main(){
    int t;
    cin>>t;
    while(t--) solve();
}