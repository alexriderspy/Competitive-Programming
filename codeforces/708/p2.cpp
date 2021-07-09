#include<bits/stdc++.h>

using namespace std;

#define ll long long 

void solve(){
    ll n,m;
    cin>>n>>m;
    vector<ll>a;
    //vector<ll>count;
    for(ll i=0;i<n;i++){
        ll temp;
        cin>>temp;
        temp=temp%m;
        a.push_back(temp);

    }
    if(a.size()==1){
        cout<<1<<endl;return;
    }
    ll ctr=0;
    //ll c=0;
    sort(a.begin(),a.end());
    ll i=0,j=0;
    vector<ll>b;
    while(j<=m-1){
        ctr=0;
        while(a[i]==j && i<=n-1){
            i++;ctr++;
        }
       // cout<<ctr<<" ";
        b.push_back(ctr);
        j++;
    }
    //cout<<endl;
   /* for(ll i=0;i<m;i++){
        cout<<b[i]<<" ";
    }*/
    //cout<<endl;
    ctr=0;
    if(b[0]>=1) ctr++;
    if(m%2==0)
    {for(ll i=1;i<m/2;i++){
        if(b[i]==b[m-i] && b[i]!=0){
            ctr++;
        }
        else{
            //cout<<"abs"<<abs(b[i]-b[m-i]);
            ctr+=abs(b[i]-b[m-i]);
            //cout<<"i"<<i<<" "<<ctr<<" ";
        }
    //    cout<<ctr<<" ";
    }
    if(b[m/2]>=1) ctr++;
    }
    else
    {for(ll i=1;i<=m/2;i++){
        if(b[i]==b[m-i] && b[i]!=0){
            ctr++;
        }
        else{
            ctr+=abs(b[i]-b[m-i]);
        }
    }
    }
    cout<<ctr<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--)
    solve();
}