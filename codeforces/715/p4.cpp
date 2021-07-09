#include<bits/stdc++.h>

using namespace std;

#define ll long long 

void solve(){
    int n,j=0,k=0,i=0;
    cin>>n;
    string a,b,c,t,ans="";
    cin>>a>>b>>c;
    while(i<2*n && j<2*n && k<2*n){
        if(a[i]==b[j] && b[j]==c[k]){
           // cout<<a[i]<<" ";      
            t.push_back(a[i]);i++,j++;k++;
    //        cout<<a[i]<<" ";
             continue;
        }
        if(a[i]==b[j]){
           // cout<<a[i]<<" ";
            t.push_back(a[i]);i++,j++; 
            continue;
        }
        if(a[i]==c[k]){
           // cout<<a[i]<<" ";
            t.push_back(a[i]); i++,k++; continue;
        }
        if(c[k]==b[j]){
         //   cout<<c[k]<<" ";
            t.push_back(c[k]);k++,j++; continue;
        }
    }
    int l=t.size();
    ans+=t;
    if((i==2*n && j==2*n) || (j==2*n && k==2*n)||(i==2*n && k==2*n)){
        cout<<ans<<endl;
        return;
    }
    if(i>=(l-n) && i!=2*n){
        for(int h=i;h<2*n;h++){
            ans+=a[h];
        }
            cout<<ans<<endl;
        return;
    }
    if(j>=(l-n) && j!=2*n){
        for(int h=j;h<2*n;h++){
            ans+=b[h];
        }
    cout<<ans<<endl;        
        return;
    }
    if(k>=(l-n) && k!=2*n){
        for(int h=k;h<2*n;h++){
            ans+=c[h];
        }
    cout<<ans<<endl;    
    return;
    }


}
int main(){
    int t;
    cin>>t;
    while(t--)
    solve();
}