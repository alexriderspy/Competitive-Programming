#include<bits/stdc++.h>

using namespace std;

const int MOD = 1e9+7;
void solve(){
    int n;
    cin>>n;
    vector<pair<int,int> >v(n+1,{0,0});
    for(int i=1;i<=n;i++) cin>>v[i].first;
    for(int i=1;i<=n;i++) cin>>v[i].second;
    sort(v.begin(),v.end());
    int cnt=0;
    long long int ans;
    set<int>s;
    for(int i=1;i<=n;i++){
        int val=v[i].first;
        if(s.find(val)==s.end()){
            cnt++;
            s.insert(i);
            int tmp=v[i].second;
            s.insert(tmp);
            while(v[tmp].second!=v[i].first){
                
                tmp=v[tmp].second;
                s.insert(tmp);
            }
        }
    }
    ans=1;
    while(cnt--){
        ans*=2;
        ans=ans%MOD;
        
    }
    cout<<ans % MOD<<'\n';
}
int main(){
    int t;cin>>t;
    while(t--) solve();
}