#include<bits/stdc++.h>

using namespace std;

#define ll long long 

void solve(){
    ll n,flag=0;
    cin>>n;
    string a,b;
    cin>>a>>b;
    vector<ll>count;
    int c=0;
    for(ll i=0;i<n;i++){
        if(a[i]=='1') {
            c++;
            
        }
        count.push_back(c);
    }
 /*   for(ll i=0;i<n;i++){
        cout<<count[i]<<" ";
    }*/
    for(ll i=n-1;i>=0;i--){
        // cout<<a[i]<<" "<<b[i]<<" "<<i<<" ";
        if(a[i]!=b[i] && flag==0){
         //   cout<<a[i]<<b[i]<<i<<" ";
            flag=1;
            if(i%2==0 || count[i]!=((i+1)/2)) {
         //       cout<<a[i]<<b[i]<<i<<" ";
                cout<<"No"<<endl;return;
            }
        }

            if(a[i]==b[i] && (flag==1)){
                flag=0;
             //   cout<<a[i]<<b[i]<<i<<" ";
            if(i%2==0 || count[i]!=((i+1)/2)) {
                
                cout<<"No"<<endl;return;
            }

            }
        }
        cout<<"Yes"<<endl;
    }
    

int main(){
    ll t;
    cin>>t;
    while(t--)
    solve();
}