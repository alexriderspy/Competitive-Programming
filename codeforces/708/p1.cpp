#include<bits/stdc++.h>

using namespace std;

#define ll long long 

void solve(){
    int n;
    cin>>n;
    vector<int>a;
    set<int>s;

    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        a.push_back(temp);
        s.insert(temp);
    }
    for(auto it=s.begin();it!=s.end();it++){
        cout<<*it<<" ";
    }
    sort(a.begin(),a.end());
   /* for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }*/
   // cout<<endl;
    for(int i=1;i<n;i++){
        while(a[i]==a[i-1] && i<=n-1){  
            
            cout<<a[i]<<" ";i++;
        }
    }
   cout<<endl;
    a.clear();
    s.clear();
}
int main(){
    int t;
    cin>>t;
    while(t--)
    solve();
}