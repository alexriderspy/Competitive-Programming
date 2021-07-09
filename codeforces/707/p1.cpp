#include<bits/stdc++.h>

using namespace std;

#define ll long long 

void solve(){
    int n;
    cin>>n;
    vector<pair<ll,ll>>a;
    vector<ll>delay;

    ll extra=0;
    ll sum=0;
    for(ll i=0;i<n;i++){
        ll tempa,tempb;cin>>tempa>>tempb;
        a.push_back(make_pair(tempa,tempb));
       
    }
    for(ll i=0;i<n;i++){
        ll temp;
        cin>>temp;
        delay.push_back(temp);
    }
    vector<pair<ll,ll>>b;
    for(ll i=0;i<n;i++){
        b.push_back(make_pair(0,0));

    }
    for(ll i=0;i<n;i++){
        
        ll temp;
        temp=a[i].first;
        b[i].first=(i==0)?(a[i].first+delay[i]):( b[i-1].second+a[i].first-a[i-1].second+delay[i]);
        
        
        ll f_arg=b[i].first+ceil((a[i].second-a[i].first)/2.0);
        b[i].second= max(f_arg,a[i].second);
       // cout<<b[i].first<<" "<<b[i].second<<" ";
    }

    cout<<b[n-1].first<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--)
    solve();
}