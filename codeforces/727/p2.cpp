#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,q;
    cin>>n>>q;
    vector<int>cnt[26];
    
    string s;
    cin>>s;
    int val;
    val=s[0]-'a';

    for(int i=0;i<26;i++) cnt[i].push_back(0);
    cnt[val][0]=1;
    
    for(int i=1;i<n;i++){
        val=s[i]-'a';
        for(int j=0;j<26;j++){
            cnt[j].push_back(0);
            
            cnt[j][i]=cnt[j][i-1];    
            
        }
        cnt[val][i]++;   
    }
    long long int ans;
    while(q--){
        int l,r;
        cin>>l>>r;
        l--,r--;
        ans=0;
        for(int j=0;j<26;j++){
            if(l>=1)
            ans+=((j+1)*(cnt[j][r]-cnt[j][l-1]));
            else
            ans+=((j+1)*(cnt[j][r]));
        }
        cout<<ans<<'\n';
    }
}