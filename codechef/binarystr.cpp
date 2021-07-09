#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double
#define MOD 10000007
#define gen(i,a,b) for(ll i=a;i<b;i++)

void make_seq01(vector<ll>&a)
{
    
    ll n=a.size();
    ll i=n-1;
    if(a[0]==1) return;
    while(a[0]!=1)
    {
        ll t=a[n-1];
        for(ll i=n-1;i>=0;i--)
        {if(i==0){
            a[0]=t; 
        }
        else
       { a[i]=a[i-1];}
        }        
        i=n-1;
    }
    return;
}
void solve()
{   
    ll n,c;
    cin>>n>>c;
    string s;
    cin>>s;
    vector<ll>seq;
    seq.reserve(n);
    for(ll i=0;i<n;i++)
    {
        s[i]-='0';
        seq.push_back(s[i]);
    }
    if(count(seq.begin(),seq.end(),1)==0)
    {
        cout<<"No"<<endl;return;
    }
    make_seq01(seq);
    ll violation=0;
    for(ll i=0;i<n;i++)
    {
        ll counter=0;
        if(seq[i]==0)
        {
            while(seq[i]==0 && i<n)
            {
                counter++;i++;
            }
        }
        if(counter>c)   violation++;
        if(seq[n-1]==0 && i==n) violation--;
        if(violation>1) {
            cout<<"No"<<endl;return;
        }
    }
    if(violation==1 || violation==0){
        cout<<"Yes"<<endl;
    }

}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}