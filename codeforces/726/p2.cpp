#include<bits/stdc++.h>

using namespace std;

void solve(){
    long long int n,m,i,j,x1,y1,x2,y2;
    cin>>n>>m>>i>>j;
    i--,j--;
    if(i<n/2){
        x1=n-1;
        x2=0;
    }
    else{
        x1=0;
        x2=n-1;
    }
    if(j<m/2){
        y1=m-1;
        y2=0;
    }
    else{
        y1=0;
        y2=m-1;
    }
    

    x1++,y1++,x2++,y2++;
    cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<'\n';
}
int main(){
    int t;
    cin>>t;
    while(t--) solve();
}