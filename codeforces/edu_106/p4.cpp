#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define MAXN 20000000

ll spf[MAXN];
void sieve()
{
    spf[1] = 1;
    for (int i=2; i<MAXN; i++)
  
        // marking smallest prime factor for every
        // number to be itself.
        spf[i] = i;
  
    // separately marking spf for every even
    // number as 2
    for (int i=4; i<MAXN; i+=2)
        spf[i] = 2;
  
    for (int i=3; i*i<MAXN; i++)
    {
        // checking if i is prime
        if (spf[i] == i)
        {
            // marking SPF for all numbers divisible by i
            for (int j=i*i; j<MAXN; j+=i)
  
                // marking spf[j] if it is not 
                // previously marked
                if (spf[j]==j)
                    spf[j] = i;
        }
    }
}

ll ans(ll r){
    ll c=0;
    while(spf[r]!=1){
        c++;
        ll val=spf[r];
        while(spf[r]==val) {
            r/=spf[r];
        }
    }
    return (pow(2,c));
}
void solve(){
    ll c,d,x,cnt=0,n,flag=0;
    cin>>c>>d>>x;
    ll AB;
    for(int i=1;i*i<=x;i++){
        if(x%i) continue;
        if((d+x/i)%c ){
          goto z;  
            continue;
                }        AB=(d+x/i)/c;
      //  cout<<AB<<" ";
        cnt+=ans(AB);
        z:
        if(i*i!=x){
            if((d+i)%c)continue;
            AB=(d+i)/c;
            cnt+=ans(AB);
        }
    }
    cout<<cnt<<endl;
}
int main(){
    ll t;
    cin>>t;
    sieve();
    while(t--){
        solve();
    }    
}