#include<bits/stdc++.h>

using namespace std;

#define ll long long
void solve(){
    ll n,k;
    cin>>n>>k;
    vector<ll>a;
    int i=0;
    while(k>0){
        i++;
        k-=i;
    }
    k+=i;
  //  cout<<k<<" "<<i<<" ";
    int r=i;
    for(int i=0;i<=n-(r+2);i++) cout<<"a";
    cout<<"b";
    
    string s="";
    for(int i=0;i<r-1;i++) s+="a";
    s+="b";
 //   cout<<s<<" ";
    
    for(int i=1;i<k;i++){
        swap(s[r-i],s[r-i-1]);
    }
    cout<<s<<'\n';
}
int main(){
    int t;cin>>t;
    while(t--) solve();
}