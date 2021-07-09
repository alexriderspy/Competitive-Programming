#include<bits/stdc++.h>

using namespace std;

#define ll long long 

void solve(){
    int n;
    cin>>n;
    vector<ll>a;
    ll x;
    for(ll i=0;i<n;i++){
        ll temp;
        cin>>temp;
        if(i==0){
            x=temp;
        }else{
        x=x ^ temp;}
       
        a.push_back(temp);
    }
    //cout<<x<<" ";
    if(x==0) {cout<<"YES"<<endl;return;}
    else {
        vector<int>prefxorar(n+1);
        prefxorar[0]=a[0];
      //  cout<<prefxorar[0]<<" ";
        for(int i=1;i<n;i++){
            prefxorar[i]=(prefxorar[i-1]^a[i]);
        //    cout<<prefxorar[i]<<" ";
                      
        }

        for(int i=0;i<(n-2);i++){
            for(int j=i+1;j<(n-1);j++){
                int xor1,xor2,xor3;
                xor1=prefxorar[i];
                xor2=(prefxorar[j]^prefxorar[i]);
                xor3=(prefxorar[n-1]^prefxorar[j]);
                if(xor1==xor2 && xor2==xor3){
                    cout<<"YES"<<endl;return;
                }
            }
        }
        cout<<"NO"<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--)
    solve();
}