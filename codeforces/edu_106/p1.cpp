#include<bits/stdc++.h>

using namespace std;

#define ll long long 

void solve(){//i for white //2 for black
    int n,k1,k2,w,b;
    cin>>n>>k1>>k2>>w>>b;
   // int a[2][1000];
 //   memset(a,0,sizeof(a));
    int tempw=(max(k1,k2)-min(k1,k2))/2;
    int tempb=tempw;
    if(w<=(min(k1,k2)+tempw) && b<=(min(n-k1,n-k2)+tempb)){
        cout<<"YES"<<endl;return;
    }
    cout<<"NO"<<endl;

   // cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--)
    solve();
}