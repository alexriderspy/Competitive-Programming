#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    
    string mini;
    for(int i=1;i<=n;i++){
        string l="";
        for(int j=0;j<i;j++){
            l+=s[j];
        }
        string tmp=l;
        for(int m=1;m*i<=k;m++){
            l+=tmp;
        }
        tmp="";
        for(int m=0;m<k;m++){
            tmp+=l[m];
        }
        if(i==1) mini=tmp;
        mini=min(mini,tmp);
    }
    
    
    cout<<mini<<'\n';
}