#include<bits/stdc++.h>

using namespace std;
#define ll long long 
#define no cout<<"No"<<endl;return;
#define yes cout<<"Yes"<<endl;return;

void solve()
{
    int n,u,r,d,l;
    cin>>n>>u>>r>>d>>l;
    ll U=u,R=r,D=d,L=l;
    if(u==n )
    {
        L--,R--;
    }
    if(d==n)
    {
        L--,R--;
    }
    if(l==n)
    {
        U--,D--;
    }
    if(r==n)
    {
        U--,D--;
    }
    if(u==n-1)
    {
        L>=R?L--:R--;
    }
    if(l==n-1 )
    {
        U>=D?U--:D--;
    }


    if(d==n-1)
    {
         L>=R?L--:R--;
    }
    if(r==n-1)
    {
        U>=D?U--:D--;
    }

    if(L<0||R<0||U<0||D<0)
    {
        cout<<"No"<<endl;return;
    }
    cout<<"Yes"<<endl;
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
}