#include<bits/stdc++.h>

using namespace std;

#define ll long long
int main(){

    int n,p;
    cin>>n;
    p=n;
    vector<pair<ll,ll>>v;
    while(p--){
        ll a,b;
        cin>>a>>b;
        v.push_back({b,a});

    }
    sort(v.begin(),v.end());
    ll ans=0,i=n-1,j=0,c=0;
    while(j<n && i>=0){
        if(c>= v[j].first){
            while(c>= v[j].first && j<n){
                ans+=v[j].second;
                c+=v[j].second;
                v[j].second=0;
                j++;
                
           }
        }else{
            if(v[i].second +c>=v[j].first ){
                ans+=(v[j].first-c)*2;
                v[i].second-=(v[j].first-c);

                c+=(v[j].first-c);
                

            }else{
                ans+=v[i].second*2;
                c+=v[i].second;
                v[i].second=0;
                i--;
            }    
        }
    }
    cout<<ans<<'\n';
}