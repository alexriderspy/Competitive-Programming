#include<bits/stdc++.h>

using namespace std;

#define ll long long 

void solve(){
    int j,i,flag=0;
    //cin>>n;
    string a;
    cin>>a;
    if(a.size()==1){
        cout<<"YES"<<endl;return;
    }
    int n=a.size();
    for(i=0;i<n-1;i++){
        if(a[i]=='1' && a[i+1]=='1'){
            flag=1;break;
        }
    }
    if(flag==0){
        cout<<"YES"<<endl; return;
    }
    for(j=n-1;j>=1;j--){
        if(a[j]=='0'&& a[j-1]=='0'){
            flag=2;break;
        }
    }
    if(flag==2 && j>i){
        cout<<"NO"<<endl;return;
    }
    cout<<"YES"<<endl;
    
    //cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--)
    {solve();}
}