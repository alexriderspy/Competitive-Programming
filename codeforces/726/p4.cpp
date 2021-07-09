#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin>>n;
    if(n%2!=0) {
        cout<<"Bob\n";return;
    }
    for(int j=31;j>0;j--){
        int pos=1<<j;
        if(pos==n){
            if(j%2==0){
                cout<<"Alice\n";return;
            }else{
                cout<<"Bob\n";return;
            }
        }
    }
    cout<<"Alice\n";return;
}
int main(){
    int t;
    cin>>t;
    while(t--) solve();
}