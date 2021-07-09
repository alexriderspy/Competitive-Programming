#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin>>n;
    int a1,a2,a3,b1,b2,b3;
    cin>>a1>>a2>>a3>>b1>>b2>>b3;
    int mini=min(abs(b3-a1)+abs(b2-a3)+abs(a1-b2),n);
    int maxi=min(abs(b1-a3)+abs(b3-a2)+abs(a2-b1),n);
    cout<<mini<<" "<<maxi<<'\n';
}
int main(){
    solve();
}