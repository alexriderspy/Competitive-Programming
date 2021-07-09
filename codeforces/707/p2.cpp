#include<bits/stdc++.h>

using namespace std;

#define ll long long

void solve(){
    ll n;
    cin>>n;
    int flag=0;
    vector<ll>a;
    for(ll i=0;i<n;i++){
        ll temp;
        cin>>temp;
        a.push_back(temp);
    }
    vector<ll>b;
    for(ll i=n-1;i>=0;i--){
        ll temp=a[i];
        if (temp==0){
            b.push_back(0);continue;
        }
        while(temp--){
            b.push_back(1);
            i--;
            if(i==-1){
                flag=1;
                break;
            }
            if(a[i]>=temp+1){
                temp=a[i];
            }
            
        }
        i++;
    }

    for(ll i=b.size()-1;i>=0;i--){
        cout<<b[i]<<" ";
    }
    cout<<endl;


}
int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}