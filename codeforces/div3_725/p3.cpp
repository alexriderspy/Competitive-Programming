//lower_bound-> 10 20 30 30 30 40 -> gives the first 30
//upper_bound ->gives the last 30
//if element does not occur, then it points to the next element
//which is larger

#include<bits/stdc++.h>

using namespace std;
const int lll=1e9+2;
int main(){
    int t;
    cin>>t;
    while(t--){
    
        long long int ans=0;
        vector<int>v;
        int lb,rb,n,l,r;
        
        cin>>n>>l>>r;
        for(int i=0;i<n;i++){
            int tmp;cin>>tmp;
            v.push_back(tmp);
        }
        v.push_back(lll);
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++){
            auto it1=upper_bound(v.begin()+i+1,v.end(),r-v[i]);
            
            auto it2=upper_bound(v.begin()+i+1,v.end(),l-v[i]-1);
            
            if((*it1)!=(r-v[i])){
                it1--;
            }
            if((*it2)!=(l-v[i]-1)){
                it2--;
            }
            int index1=it1-v.begin();
            int index2=it2-v.begin();
            ans+=(index1-index2);
        }
        cout<<ans<<'\n';
    }
}