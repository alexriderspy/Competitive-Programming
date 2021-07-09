#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    
    if(n%k!=0) cout<<-1<<'\n';
    else{
        vector<int>cnt(26);
        vector<int>good(26,1);
        for(int i=0;i<n;i++){
            int j=s[i]-'a';
            cnt[j]++;
            if(cnt[j]%k==0) good[j]=1;
            else good[j]=0;
        }

        //max common prefix
        for(int i=n-1;i>=0;i--) {
            vector<int>badj;
            for(int j=0;j<26;j++){
                if(good[j]==0) badj.push_back(j); 
            }
            if(badj.size()==0){
                cout<<s<<"\n";return;
            }else{
                int d=s[i]-'a';
                if(good[d]==0)
                {
                    cnt[d]--;
                    if(cnt[d]%k==0) good[d]=1;
                    for(int m=d+1;m<26;m++){
                        cnt[m]++;
                        if(cnt[m]%k==0) break;
                    }
                }
                for(int j=i+1;j<n;j++){
                    if(good[j]==1) continue;

                }
            }
        }   
    }
}
int main(){
    int t;
    cin>>t;
    while(t--) solve();
}