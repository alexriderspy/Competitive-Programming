#include<bits/stdc++.h>

using namespace std;

#define ll long long 

void solve(){
    int n,flag=0;
    cin>>n;
    string s;
    cin>>s;
    char a[200001],b[200001];
    for(int i=0;i<n;i++){
        a[i]='(';
        b[i]='(';
    }
    if(s[0]=='0' || s[n-1]=='0'){
        cout<<"No"<<endl;return ;
    }
    int c0=0,c1=0;
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            c0++;
        }
        else{
            
            c1++;
        }
    }
    if(c0%2!=0) {
        cout<<"No"<<endl;return;
    }
    int k=0,i=0;
    for(;i<n;i++){
        if(s[i]=='1'){
            a[i]='(';b[i]='(';
            k++;
            if(k==(c1/2)) break;
        }
    }
    k=0;
    for(i=n-1;i>=0;i--){
        if(s[i]=='1'){
            a[i]=')';b[i]=')';
            k++;
            if(k==(c1/2)) break;
        }
    }
    
    for(int i=0;i<n;i++){
        if(s[i]=='0' &&flag==0){
            flag=1;
            a[i]='(';b[i]=')';
        }
        else if(s[i]=='0' && flag==1){
            flag=0;
            a[i]=')';b[i]='(';
        }
    }
    cout<<"Yes"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<b[i];
    }


    cout<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--)
    solve();
}