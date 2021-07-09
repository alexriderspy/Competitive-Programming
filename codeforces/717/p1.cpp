#include<bits/stdc++.h>

using namespace std;

#define ll long long 

void solve(){
    int n,k;
    cin>>n>>k;
    vector<int>a;
    for(int i=0;i<n;i++){
        int temp;cin>>temp;a.push_back(temp);
    }
    //sort(a.begin(),a.end());
    for(int i=0;i<n-1;i++){
        if(k>=a[i]){
            a[n-1]+=a[i];k-=a[i]; a[i]=0; 
        }else{
            a[i]-=k;a[n-1]+=k; break;
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" "; 
    }
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--)
    solve();
}