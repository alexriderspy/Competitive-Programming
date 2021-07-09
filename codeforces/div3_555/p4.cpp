#include<bits/stdc++.h>

using namespace std;
typedef vector<int> VI;
typedef vector<vector<int>> VVI;
typedef vector<string> VS;
typedef vector<vector<string>> VVS;
typedef signed long long i64;
typedef unsigned long long u64;

#define pi pair<int, int>
#define mod 1000000007
#define ll long long
#define ld long double
#define fu(i, m, n) for (ll i = (m); i < (n); ++i)
#define fr(i, S, E) for (typeof(E) i = (S); i != (E); ++i)
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define YES cout<<"YES"<<endl;
#define NO cout<<"NO"<<endl; 


ll fact(ll n){
    ll p=1;
    for(ll k=1;k<=n;k++){
    p*=k;
    p=p%mod;
    }
    p=p%mod;
    return p;

}

ll power(ll n, ll k){
    ll p=1;
    while(k--){
        p*=n;
    }
    return p;
}


bool cmp(pair<ll, ll> a, pair<ll, ll> b) {return a.second < b.second;}

void solve(){
    int n,f=0;
    cin>>n;
    vector<int>a,cl,cr;
    vector<char>dl,dr;
    for(int i=0;i<n;i++){
        int tmp;
        cin>>tmp;
        a.push_back(tmp);
    }
    cl.push_back(0);
    cr.push_back(0);
    
    //vector<int>b(a.rbegin(),a.rend());
   // fu(i,0,n) cout<<b[i]<<" ";
   int i=0,j=n-1;
   while(i<=j){
       if(max(a[i],a[j])<=cl.back()) break;
        if(a[j]<a[i]){
        if(a[j]>cl.back()){
            dl.push_back('R');
            dr.push_back('R');
            cr.push_back(a[j]);
            
            cl.push_back(a[j]);j--;
        }else{
            dl.push_back('L');
            cl.push_back(a[i]);
            dr.push_back('L');
            //dl.push_back('L');
            cr.push_back(a[i]);i++;

        }

    }
        else if(a[i]<a[j]){
           if(a[i]>cr.back()){
            dr.push_back('L');
           cl.push_back(a[i]);
            dl.push_back('L');
            
           cr.push_back(a[i]);i++;
        }else{
            dl.push_back('R');
            dr.push_back('R');
           cl.push_back(a[j]);           
           cr.push_back(a[j]);j--;

        }
    }
    else{
        f=1;break;
    }

}
    int si=i,sj=j;
    //considering l 
    if(f==1){
        while(si<=sj){
        if(a[si]<=cl.back()) break;
        if(a[si]>cl.back()){
            cl.push_back(a[si]);dl.push_back('L');si++;
            }        
        }
        while(i<=j){
        if(a[j]<=cr.back()) break;
        if(a[j]>cr.back()){
            cr.push_back(a[j]);dr.push_back('R');j--;
            }        
        }
        

    }

    if(dr.size()>dl.size()){
   int h=dr.size();
   cout<<h<<"\n";
   for(char ch:dr){
       cout<<ch;   }
    cout<<"\n";
    }else{
   int h=dl.size();
   cout<<h<<"\n";
   for(char ch:dl){
       cout<<ch;   }
    cout<<"\n";

    }
}
int main()

{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    //ll t;cin>>t;
    solve();
}

   


