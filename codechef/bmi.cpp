#include<iostream>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll m,h;
        cin>>m>>h;
        ll res=m/(h*h);
        if(res<=18)
        {
            cout<<1<<endl;
        }
        else if(res>=19 && res<=24)
        {
            cout<<2<<endl;
        }
        else if (res>=25 && res<=29)
        {
            cout<<3<<endl;
        }
        else
        {
            cout<<4<<endl;
        }
    }
}