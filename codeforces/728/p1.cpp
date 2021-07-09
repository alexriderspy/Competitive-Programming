#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin>>n;
    if(n%2==0){
        for(int i=1;i<=n;i+=2){
            cout<<i+1<<" "<<i<<" ";
        }cout<<"\n";
    }else{
        for(int i=1;i<=n-3;i+=2){
            cout<<i+1<<" "<<i<<" ";
        }
        cout<<n-1<<" "<<n<<" "<<n-2;
        cout<<"\n";
        
    }
}
int main(){
    int t;
    cin>>t;
    while(t--) solve();
}