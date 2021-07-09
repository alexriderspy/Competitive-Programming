#include<bits/stdc++.h>

using namespace std;

void solve(){
    int r,c;
    string tmp;
    cin>>r>>c;
    vector<string>v;
    for(int i=0;i<r;i++){
        string tmp;
        cin>>tmp;
        v.push_back(tmp);
    }
    vector<string>ans;
    for(int i=0;i<r;i++){
        tmp="";
        if(i%2==0){
            for(int j=0;j<c;j++){
                if(j%2==0) tmp+='R';
                else tmp+='W';
            }
        }
        else{
            for(int j=0;j<c;j++){
                if(j%2==0) tmp+='W';
                else tmp+='R';
            }

        }
        ans.push_back(tmp);
        for(int j=0;j<c;j++){
            if(v[i][j]!=ans[i][j] && v[i][j]!='.'){
        ans.clear();
        for(int i=0;i<r;i++){
        tmp="";
        if(i%2==0){
            for(int j=0;j<c;j++){
                if(j%2==0) tmp+='W';
                else tmp+='R';
            }
        }
        else{
            for(int j=0;j<c;j++){
                if(j%2==0) tmp+='R';
                else tmp+='W';
            }

        }
        ans.push_back(tmp);
        for(int j=0;j<c;j++){
            if(v[i][j]!=ans[i][j] && v[i][j]!='.'){
                cout<<"NO"<<'\n';return;
            }
        }
       }

      }
    }
}
    cout<<"YES\n";
    for(int i=0;i<r;i++){
        cout<<ans[i]<<'\n';
    }
    return;
}
int main(){
    int t;cin>>t;
    while(t--) solve();
}