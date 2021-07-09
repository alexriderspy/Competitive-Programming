#include<bits/stdc++.h>

using namespace std;

#define ll long long

ll mexi(set<ll>a,int &flag){
    auto i=a.begin(); 
    ll j=0;
    while(i!=a.end()){
        if(*i!=j){
            break;
        }
        else{
            i++;j++;
        }
    }
    if(i==a.end()){
      //  cout<<*i<<" ";
        flag=1;
    }
   // cout<<"mexi is"<<j<<" ";
    return j;
}

void solve(){
    
    set<ll>a;
    ll n,k;
    int flag=0;
    cin>>n>>k;
    for(ll i=0;i<n;i++){
        ll temp;
        cin>>temp;
        a.insert(temp);
    }
    ll mexr=mexi(a,flag);
    if(flag==1){
        cout<<a.size()+k<<endl;return;
    }
    //ll s=a.size();
    auto last=a.rbegin();
    if(k>=1){
        ll newnum=ceil(((double)mexr+*last)/2);
       // cout<<newnum<<" ";
        a.insert(newnum);
        
        cout<<a.size()<<endl;return;
    }
    else{
        cout<<a.size()<<endl;return;        
    }
    a.clear();

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}