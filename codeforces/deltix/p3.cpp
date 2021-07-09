#include<bits/stdc++.h>

using namespace std;
typedef vector<int> VI;
typedef vector<vector<int> > VVI;
typedef vector<string> VS;
typedef vector<vector<string> > VVS;
typedef signed long long i64;
typedef unsigned long long u64;

#define pi pair<int, int>
#define mod 1000000007
#define ll long long
#define ld long double
#define fu(i, m, n) for (ll i = (m); i < (n); ++i)
#define pb push_back
#define YES cout<<"YES"<<'\n';
#define NO cout<<"NO"<<'\n'; 
#define sz(x) (int)(x).size()

void solve(){
	int n,tmp,i=0;
	cin>>n;
	VI input(n,0);
	int x;
    for(int i=0;i<n;i++) cin>>input[i];
    VI v;
    for(int i=0;i<n;i++){
        x=input[i];
        if(i==0) v.push_back(1);
        else{
            if(x==1) v.push_back(x);
            else if(x==v.back()+1){
                v.pop_back();
                v.push_back(x);
            }
            else{
                while(v.back()!=(x-1)){
                    v.pop_back();
                }
                v.pop_back();
                v.push_back(x);
            }
        } 
        for(int j=0;j<(int)v.size();j++) {
            cout<<v[j];
            if(j!=(int)v.size()-1) cout<<".";
        } 
        cout<<'\n';   
    }
}
int main()

{
    //ios_base::sync_with_stdio(false), cin.tie(0);
    int t;cin>>t;
    while(t--)
    solve();
}

   
