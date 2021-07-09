#include<bits/stdc++.h>
using namespace std;

#define ll long long

void merge(set<ll>&p,int l,int r, vector<ll>&a,vector<ll>&pref){
    ll mid=(a[l]+a[r])/2;
    if(l>r){
        return;
    }
    if(l==r) {
        p.insert(a[l]);return;
    }
    int i=upper_bound(a.begin()+l,a.begin()+r+1,mid)-a.begin();
    if(i>=r+1) return;
    ll low=pref[i]-pref[l];
    ll high=pref[r+1]-pref[i];
    p.insert(low),p.insert(high);
    merge(p,l,a[i]==mid?i:i-1,a,pref);
    merge(p,a[i]==mid?i+1:i,r,a,pref);
}
void solve(){
    int n,q;cin>>n>>q;
    vector<ll>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());
    vector<ll>pref(n+1);
    for(int i=0;i<n;i++) pref[i+1]=pref[i]+a[i];
    set<ll>p;
    p.insert(pref[n]-pref[0]);
    merge(p,0,n-1,a,pref);
    ll sum;
    while(q--){
        cin>>sum;
        auto it=p.find(sum);
        if(it==p.end()) {
            cout<<"No\n";
        }else{
            cout<<"Yes\n";
        }
    }
}

int main(){
    int t;cin>>t;
    while(t--) solve();
}