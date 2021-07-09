#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,m;cin>>n>>m;
    vector<string>s;
    for(int i=0;i<n;i++) {
        string tmp;cin>>tmp;s.push_back(tmp);
    }
    vector<pair<int,int>>ans;
    int k=0;
    int l=0;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<m-1;j++){
            if(s[i][j]=='1'){
                ans.push_back({i,j});
                ans.push_back({i,j+1});ans.push_back({i+1,j});k++;
                s[i][j]='0';s[i][j+1]=='1'?s[i][j+1]='0':s[i][j+1]='1';
                s[i+1][j]=='0'?s[i+1][j]='1':s[i+1][j]='0';
            }
        }
    }
    for(int i=0;i<n-1;i++){
        if(s[i][m-1]=='1'){
            if(s[i+1][m-1]=='1'){
                ans.push_back({i,m-1});
                ans.push_back({i,m-2});ans.push_back({i+1,m-2});k++;
                ans.push_back({i,m-2});
                ans.push_back({i+1,m-2});ans.push_back({i+1,m-1});k++;
                s[i][m-1]='0',s[i+1][m-1]='0';
                
            }else{
                ans.push_back({i,m-2});
                ans.push_back({i,m-1});ans.push_back({i+1,m-1});k++;
                ans.push_back({i,m-1});
                ans.push_back({i+1,m-2});ans.push_back({i+1,m-1});k++;
                ans.push_back({i,m-2});
                ans.push_back({i,m-1});ans.push_back({i+1,m-2});k++;
                
                s[i][m-1]='0';
                
            }
        }
    }
    for(int j=0;j<m-1;j++){
        if(s[n-1][j]=='1'){
            if(s[n-1][j+1]=='1'){
                ans.push_back({n-2,j});
                ans.push_back({n-2,j+1});ans.push_back({n-1,j+1});k++;
                ans.push_back({n-2,j});
                ans.push_back({n-2,j+1});ans.push_back({n-1,j});k++;
                s[n-1][j]='0',s[n-1][j+1]='0';
                
            }else{
                ans.push_back({n-2,j});
                ans.push_back({n-1,j});ans.push_back({n-1,j+1});k++;
                ans.push_back({n-1,j});
                ans.push_back({n-2,j+1});ans.push_back({n-1,j+1});k++;
                ans.push_back({n-2,j});
                ans.push_back({n-2,j+1});ans.push_back({n-1,j});k++;
                
                s[n-1][j]='0';
                
            }
        }
        
    }
    if(s[n-1][m-1]=='1'){
            
            ans.push_back({n-2,m-1});
            ans.push_back({n-1,m-2});ans.push_back({n-1,m-1});k++;
            ans.push_back({n-2,m-2});
            ans.push_back({n-1,m-2});ans.push_back({n-1,m-1});k++;
            ans.push_back({n-2,m-2});
            ans.push_back({n-2,m-1});ans.push_back({n-1,m-1});k++;
            s[n-1][m-1]='0';          
            
        
    }
    cout<<k<<'\n';
 //   for(int i=0;i<n;i++) cout<<s[i]<<"\n";
    for(int i=0;i<ans.size();i+=3){
        for(int j=0;j<3;j++){
            cout<<ans[i+j].first+1<<" "<<ans[i+j].second+1<<" ";
        }
        cout<<'\n';
    }
    
}

int main(){
    int t;cin>>t;
    while(t--) solve();
}