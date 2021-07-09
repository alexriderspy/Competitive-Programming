#include<bits/stdc++.h>
using namespace std;

#define ll long long

int query(int l,int r){
    cout<<"? "<<l<<" "<<r<<endl;
    int z;
    cin>>z;return z;
}
void solve(){
    int n,t,l,r,mid;cin>>n>>t;
    //t=1 here
    int k;cin>>k;
    l=1;r=n;
    int z,zl,zr; //z 0's, o-> 1's
    
    while(1){
        mid=(l+r)/2;
        zl=mid-l+1-query(l,mid);
        if(l>=r) break;
        if(k<=zl){
            r=mid;
            
        }else{
            l=mid+1;
            
            k=k-zl;
        }
        
    }
    cout<<"! "<<mid<<endl;return;
    
    
}
int main(){
    solve();
}