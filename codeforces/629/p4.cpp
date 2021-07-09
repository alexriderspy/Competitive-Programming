#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n;cin>>n;
    vector<int>a(n);

    for(auto &i:a) cin>>i;
    vector<int>ans(n); 
    int f=0;
    ans[0]=1;
    for(int i=1;i<n;i++){
        if(a[i]!=a[i-1]) {
            f=1;break;
        } 
    }
    if(f==0){
        cout<<1<<"\n";
        for(int i=0;i<n;i++) cout<<1<<" ";cout<<'\n';return;
    }

    if(n%2==0){
        cout<<2<<'\n';
        
        for(int i=0;i<n;i+=2) cout<<"1 2 ";cout<<'\n';return;
    }
    for(int i=1;i<n;i++){
        if(a[i]==a[i-1]){
            cout<<2<<'\n';
            for(int j=0;j<=i-1;j++){
                if(j%2==0)
                cout<<"1 ";
                else cout<<"2 ";
            }
            int f;
            if((i-1)%2 ) cout<<"2 ",f=0;
            else cout<<"1 ",f=1;
            
              
            for(int k=i+1;k<=n-1;k++){
                if(f) cout<<"2 ",f=0;
                else cout<<"1 ",f=1;    

            }cout<<'\n';return;
        }
    }
    if(a[0]==a[n-1]) cout<<2<<'\n';
    else
    cout<<3<<'\n';
    
    for(int i=0;i<n-1;i++){
        if(i%2==0)
        cout<<"1 ";
        else
        cout<<"2 ";
    }
    if(a[0]==a[n-1]) cout<<"1 \n";
    else
    cout<<"3\n";
    //c<=3
    //c=1 when all equal
    //n=even 1 2 1 2 1 2.. like this so good
    //n=odd -> if some pair same we can merge them to get c=2;
    //else c=3;


}
int main(){
    int t;cin>>t;
    while(t--) solve();
}