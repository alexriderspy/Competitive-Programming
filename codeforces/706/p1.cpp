#include<iostream>

using namespace std;
void solve(){
    string s;
    int i,n,k;
    cin>>n>>k;
    cin>>s;
    for( i=0;i<=(n-1)/2;i++){
       // cout<<i<<" ";
        if(s[i]!=s[n-1-i]){
            
            break;
        }
        
    }
    if(i>(n-1)/2) i--;
    if(i<k){
        cout<<"NO"<<endl;return;
    } 
    cout<<"YES"<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}