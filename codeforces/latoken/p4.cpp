#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>v(n,0);
    
    cout<<"? "<<1<<endl;
    vector<int>black;
    vector<int>white;
    vector<int>adj[n];

    for(int i=0;i<n;i++) {
        cin>>v[i];
        if(v[i]==1) adj[0].push_back(i);
        if(i==0) continue;
        if(v[i]%2==0) black.push_back(i);
        else white.push_back(i);
    }
    
    if((int)black.size() <= (int)white.size()){
        int i=0;
        while(i<(int)black.size()){
            cout<<"? "<<black[i]+1<<endl;
            int x;
            for(int j=0;j<n;j++) {
               
                cin>>x;
                if(x==1 && j!=0)
                adj[black[i]].push_back(j);
            }
            i++;
        }
        
    }
    else{
        int i=0;
        while(i<(int)white.size()){
            cout<<"? "<<white[i]+1<<endl;
            int x;
            for(int j=0;j<n;j++) {
                cin>>x;
                if(x==1 && j!=0)
                adj[white[i]].push_back(j);
            }
            i++;
        }

    }
    cout<<"!"<<endl;
    for(int i=0;i<n;i++){
        
        for(int j=0;j<(int)adj[i].size();j++){
            cout<<i+1<<" "<<adj[i][j]+1<<endl;
        }
    }
}