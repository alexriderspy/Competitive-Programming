#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
    ll n,k,x;
    cin>>n>>k>>x;
    vector<ll>v(n);
    for(auto &l:v) cin>>l;
    sort(v.begin(),v.end());
    ll ans=0;
    vector<ll>violate;
    ll val;
    for(ll i=0;i<n-1;i++){
        
        if(v[i+1]-v[i]>x) {
            val=(v[i+1]-v[i]+x-1)/x -1;
            violate.push_back(val);
            
        }
    }
  // for(auto l:violate) cout<<l<<'\n';
    sort(violate.begin(),violate.end());
    ll i;
    for(i=0;i<(ll)violate.size();i++){
        k-=violate[i];
        if(k<0){
            cout<<(ll)violate.size()-i+1<<'\n';return 0;
        }
    }
    cout<<(ll)violate.size()-i+1<<'\n';

}