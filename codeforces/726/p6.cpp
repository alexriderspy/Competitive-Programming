#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int last=0,j=0;
    for(int i=1;i<n;i++){
        if(s[i]<s[j]) last=i,j=0;
        else if(s[i]==s[j]) j++;
        else break;
    }
    string pref=s.substr(0,last+1);
    //my best prefix
    string ans=pref;
    while(ans.size()<=k){
        ans+=ans;
    }
    ans=ans.substr(0,k);
    cout<<ans<<'\n';
}