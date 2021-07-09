#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,le,re,ans=0;
    cin>>n>>le>>re;
    //changing some left to right, then some right to left, 
    // wont lead to optimal, we need an invariant which in this case is
    //l>=r then we know we need to change (l-r)/2 left to right
    //so we do that optimally

    vector<int>l(n+1),r(n+1);
    for(int i=1;i<=le;i++) {int a;cin>>a;l[a]++;}
    for(int i=1;i<=re;i++) {int a;cin>>a;r[a]++;}
    if(le<re){
        swap(l,r);swap(le,re);
    }
    //we have le>=re
    //first is obv remove already paired elements
    for(int a=1;a<=n;a++) {
        if(l[a]>r[a]) le-=r[a],re-=r[a],l[a]-=r[a],r[a]=0;
        else le-=l[a],re-=l[a],r[a]-=l[a],l[a]=0;
    }
    //removed equally from both, so le>=re holds
    //maintaining this invariant is very essential

    //so we convert some le to re, maintaining le>=re
  //  cout<<le<<" "<<ans<<'\n';
    for(int a=1;a<=n;a++){
        while(l[a]>=2 && le-re >1) {
            l[a]-=2,ans+=1,le-=2;

        }
    }
    //cout<<ans<<'\n';
    //now still we have some le left to convert to re
    ans+=((le-re)/2) ;
    le-=(le-re)/2;
    ans+=le;
    cout<<ans<<'\n';

}

int main(){
    int t;cin>>t;
    while(t--) solve();
}