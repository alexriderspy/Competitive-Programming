#include<bits/stdc++.h>
using namespace std;

#define ll long long
void solve(){
    int n,k;cin>>n>>k;
    int y=1,x,r,f=0;
    while(1){
        
        cout<<y<<endl;
        cout.flush();
        cin>>r;
        if(r==1){
            return;
        }
        if(f==0)
        {
            y=n-y;f=1;
        }else{
            y++;f=0;
        }
    }
}

int main(){
    //ios_base::sync_with_stdio(false);
    int t=1;
    cin>>t;
    while(t--) solve();
}