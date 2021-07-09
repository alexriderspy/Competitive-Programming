#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin>>n;string s;cin>>s;
    map <pair<int,int>,int >m;
    vector<int>cntd(n+1),cntk(n+1);
    for(int i=0;i<n;i++) {
        if(s[i]=='D')
            cntd[i+1]+=cntd[i]+1,cntk[i+1]=cntk[i];
        else    
           cntk[i+1]+=cntk[i]+1,cntd[i+1]=cntd[i];
    }
    for(int i=1;i<=n;i++){
        if(cntd[i]==0) {
            m[{0,1}]++;
            cout<<m[{0,1}]<<" ";
        }
        else if(cntk[i]==0) {
            m[{1,0}]++;
            cout<<m[{1,0}]<<" ";
        }
        else {
            int g=__gcd(cntd[i],cntk[i]);
            m[{cntd[i]/g,cntk[i]/g}]++;
            cout<<m[{cntd[i]/g,cntk[i]/g}]<<" ";
        }
    }
    cout<<"\n";
}

int main(){
    int t;cin>>t;
    while(t--) solve();
}