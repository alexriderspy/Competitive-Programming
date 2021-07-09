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

int n;
VS v;
string ans;

//tc for check()=O(4n*logn+n+(2n*(2n+log(n)))
bool check(string &pr, string &su){
    string s=pr+ su.substr(n-2);
    multiset<string>spref,ssuf,vv;
    for(int i=0;i<n-1;i++){
        spref.insert(s.substr(0,n-i-1)); //O(log n)
        vv.insert(s.substr(0,n-i-1));
        ssuf.insert(s.substr(i+1));
        vv.insert(s.substr(i+1));
    }
    if(vv==multiset<string>(v.begin(),v.end())){
        for(int i=0;i<2*n-2;i++){
            if(spref.count(v[i])){
                ans+='P';
                spref.erase(spref.find(v[i]));
            }
            else if(ssuf.count(v[i])){
                ans+='S';
                ssuf.erase(ssuf.find(v[i]));
            }
            else{
                assert(false);  //for debugging
            }

        }
        return true;
    }
    return false;
}

void solve(){
    cin>>n;
    VS c;
    for(int i=0;i<2*n-2;i++){
        string tmp;
        cin>>tmp;
        v.push_back(tmp);
        if(v[i].size()==n-1){
            c.push_back(v[i]);
        }
    }
    if(check(c[1],c[0])){
        cout<<ans<<endl;
    }
    else if(check(c[0],c[1])){
        cout<<ans<<endl;
    }
}
int main()


{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    //ll tt;cin>>tt;
    solve();
}

   
