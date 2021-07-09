#include<bits/stdc++.h>

using namespace std;

#define ll long long 

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(s[0]!='T'||s[n-1]!='T'){
        cout<<"NO"<<endl;return;
    }
    int lb;
    for(int i=0;i<n;i++){
        if(s[i]=='M') {
            lb=i;
 break;        }  
    }
    int ct=0,cm=0,indexm;
    for(int i=0;i<n;i++){
        if(s[i]=='M') {
            cm++; indexm=i;
        }
        else ct++;
    }
    if(2*cm!=ct) {
        cout<<"NO"<<endl;return;
    }
    int c=0;
    for(int k=0;k<=indexm;k++){
        if(s[k]=='T') c++;
        else if(s[k]=='M') c--;
        if(c<0) {
            cout<<"NO"<<endl;return;
        }
    }
    if(c<0) {
        cout<<"NO"<<endl;
        return;
    }
    c=0;
    for(int k=n-1;k>=lb;k--){
        if(s[k]=='T') c++;
        else if(s[k]=='M') c--;
        if(c<0) {
            cout<<"NO"<<endl;return;
        }
    }
    if(c<0) {
        cout<<"NO"<<endl;
        return;
    }
    //cout<<"YES"<<endl;

    cout<<"YES"<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--)
    solve();
}