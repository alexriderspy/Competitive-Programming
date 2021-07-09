#include<bits/stdc++.h>

using namespace std;

int peak(vector<long long int>&v,int *start){
    
    for(int i=*start;i<(int)v.size()-1;i++){
        if(v[i]>v[i-1] && v[i]>v[i+1]) {
            *start=i+1;
            return i;
        }
    }
    return -1;
    
}
void solve(){
    int n;
    cin>>n;
    n+=2;
    vector<long long int>v(n,0);
    
    for(int i=1;i<n-1;i++) cin>>v[i];
    
    long long int ugly=0;
    
    for(int i=1;i<n;i++){
        
        ugly+=abs(v[i]-v[i-1]);
    }
   // cout<<ugly<<'\n';
    int start=1;
    while(1){
        int index=peak(v,&start);
        if(index==-1) break;
      
        if(v[index-1]==v[index+1]) {
            ugly-=(v[index]-v[index-1]);
            v[index]=v[index-1];
        }else if(v[index-1]>v[index+1]){
            ugly-=(v[index]-v[index-1]);
            v[index]=v[index-1];
        }else{
            ugly-=(v[index]-v[index+1]);
            v[index]=v[index+1];

        }
    }

    cout<<ugly<<'\n';
}
int main(){
    int t;cin>>t;
    while(t--) solve();
}