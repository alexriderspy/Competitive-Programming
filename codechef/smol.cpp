#include<iostream>

using namespace std;

#define ll long long

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
    ll n,k;
    cin>>n>>k;
    if(k!=0)
    {ll t=n/k;
    ll r=t*k;
    ll c=n-r;
    cout<<c<<endl;
    }
    if (k==0)
    cout<<n<<endl;

    }
    return 0;
}