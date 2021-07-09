#include<bits/stdc++.h>

using namespace std;

#define ll long long 

void solve(){
    int n;
    cin>>n;
    vector<int>a_eve,a_odd;
    for(int i=0;i<n;i++){
        int tem;
        cin>>tem;
        if(tem%2==0)
        a_eve.push_back(tem);
        else
        a_odd.push_back(tem);
    }
    int j=0,k=0;
    for(int i=0;i<a_eve.size();i++){
        cout<<a_eve[i]<<" ";
    }
    for(int i=0;i<a_odd.size();i++){
        cout<<a_odd[i]<<" ";
    }


    cout<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--)
    solve();
}