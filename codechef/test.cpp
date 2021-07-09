#include<bits/stdc++.h>

using namespace std;
#define ll long long 

bool isPrime(ll n)
{
    for(ll i=2;i<=n/2;i++)
    {
        if(n%i==0)
        return false;
    }
    return true;
}
int main()
{
    ll a=1000003;
    if(isPrime(a))
    {
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }
    vector<int>b;
    b.push_back(5);
    cout<<b.back();
    b.erase(b.end()-1);
    cout<<b.size();

}