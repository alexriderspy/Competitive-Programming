#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>>s;
    int n=s.length();
    vector<int>zero(n,0);
    vector<int>one(n,0);
    if(s[n-1]=='1'){
        zero[n-1]=0;one[n-1]=1;
    }
    else if(s[n-1]=='0'){
        zero[n-1]=1,one[n-1]=0;
    }
    else{
        zero[n-1]=1,one[n-1]=1;
    }
    long long int ans=0;
    ans+=max(zero[n-1],one[n-1]);
    for(int i=n-2;i>=0;--i){
        if(s[i]=='1'){
            one[i]=zero[i+1]+1;
            zero[i]=0;
        }else if(s[i]=='0'){
            zero[i]=one[i+1]+1;
            one[i]=0;

        }else{
            zero[i]=one[i+1]+1;
            one[i]=zero[i+1]+1;
        }
        ans+=(max(zero[i],one[i]));
    }
    cout<<ans<<'\n';
}
int main(){
    int t;
    cin>>t;
    while(t--) solve();
}