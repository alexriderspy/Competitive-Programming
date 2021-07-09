#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<pair<int,int>>bw[2];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            bw[(i+j)%2].push_back({i,j});
        }
    }
    int t=n*n;
    int b=0,w=0;
    while(t--){
        int c;cin>>c;
        if(c==1){
            if(b<bw[0].size()){
                cout<<2<<" "<<bw[0][b].first<<" "<<bw[0][b].second<<endl;
                b++;
            }
            else{
                cout<<3<<" "<<bw[1][w].first<<" "<<bw[1][w].second<<endl;                
                w++;
            }
        }
        if(c==2 ){
            if(w<bw[1].size()){
                cout<<1<<" "<<bw[1][w].first<<" "<<bw[1][w].second<<endl;
                w++;
            }
            else{
                cout<<3<<" "<<bw[0][b].first<<" "<<bw[0][b].second<<endl;                
                b++;

            }
        }
        if(c==3){
            if(b<bw[0].size()){
                cout<<2<<" "<<bw[0][b].first<<" "<<bw[0][b].second<<endl;
                b++;
            }
            else {
                cout<<1<<" "<<bw[1][w].first<<" "<<bw[1][w].second<<endl;
                w++;
            }

        }
    }
}