#include<bits/stdc++.h>

using namespace std;

#define ll long long 
class Node{
    public:
    ll val,a,b;
    Node(ll val,ll a, ll b){
        this->val=val;
        this->a=a;
        this->b=b;
    }
};
bool comparator(Node &a1, Node &b1){
    if(a1.val!=b1.val)
    return(a1.val<b1.val);
    if(a1.a!=b1.a)
    return (a1.a<b1.a);
    if(a1.b!=b1.b)
    return(a1.b<b1.b);
}
void solve(){
    ll n,m;
    cin>>n>>m;
    vector<Node>l;    
    vector<vector<ll>> p(n+1);
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            ll tmp;
            cin>>tmp;
            p[i].push_back(tmp);
            l.push_back(Node(tmp,i,j));
        }
    }
 
    sort(l.begin(),l.end(),comparator);
 //   for(ll i=0;i<l.size();i++){
   //     cout<<l[i].val<<" "<<l[i].a<<" "<<l[i].b<<" ";
    //}
    
    ll g=0;
    for(ll v=0;v<m;v++){
        ll i=l[v].a,j=l[v].b;
        ll h;
        for(h=0;h<l.size();h++){
            if((l[h].a==i) && (l[h].b==g)){
                break;
            }
        }
        swap(p[i][j],p[i][g++]);
        l[h].b=j; l[v].b=(g-1);
    }
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }

        return;
}
int main(){
    int t;
    cin>>t;
    while(t--)
    solve();
}