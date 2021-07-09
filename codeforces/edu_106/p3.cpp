#include<bits/stdc++.h>

using namespace std;

#define ll long long 
void solve(){
    ll n;
    cin>>n;
    vector<ll>c;
    for(ll i=0;i<n;i++){
        ll temp;
        cin>>temp;
        c.push_back(temp);
    }
    
    ll mino=c[0],mine=c[1];
    ll ans,mincost=(c[0]*n+c[1]*n),prev=mincost;
    ans=mincost;
    // plan to take k segments
    for(ll i=2;i<n;i++){
        if(i%2==0){
            if(c[i]<mino){
                mincost=mincost+(c[i]-mino)*(n-i/2);
                mino=c[i];
            }else{
                
                mincost+=(c[i]-c[i-2]);
            }
        }else{
            if(c[i]<mine){
                mincost=mincost+(c[i]-mine)*(n-i/2);
                mine=c[i];
            }else{
                
                mincost+=(c[i]-c[i-2]);
            }

        }
        
        ans=min(ans,mincost);
    } 
    cout<<ans<<endl;
    c.clear();
}
int main(){
    int t;
    cin>>t;
    while(t--)
    solve();
}