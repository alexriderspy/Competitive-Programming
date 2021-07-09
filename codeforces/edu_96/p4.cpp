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
	int n,op=0;
	cin>>n;
	string s;
    cin>>s;
    s+="-1";
    int c=0;
    vector<int>cnt;
    char prev=s[0];
    int possi=0;
    for(int i=1;i<=n;i++){
        c=1;
        if(s[i]==prev){
            while(s[i]==prev){
                c++;i++;
            }
            prev=s[i];
            cnt.push_back(c);
            possi++;
        }
        else{
            cnt.push_back(c);
            prev=s[i];
        }

    }
    int k=0;
    for(int i=0;i<sz(cnt);++i){
        if(cnt[i]>1){
            op++;possi--;
        }
        else{
            if(possi>0){
                for(int j=max(k,i+1);j<sz(cnt);++j){
                    if(cnt[j]>1) {
                        cnt[j]--;
                        k=j;
                        if(cnt[j]==1)
                        possi--,k++;
                        break;
                    }
                }
                op++;
            }
            else{
                ++i;op++;
            }
        }       
    }
    cout<<op<<'\n';

}
int main()

{
    //ios_base::sync_with_stdio(false), cin.tie(0);
    int t;cin>>t;
    while(t--)
    solve();
}

   
