#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double
#define MOD 10000007
#define gen(i,a,b) for(ll i=a;i<b;i++)

void solve()
{   
    ll d,c,a1,a2,a3,b1,b2,b3;
    cin>>d>>c;
    cin>>a1>>a2>>a3;
    cin>>b1>>b2>>b3;
    ll a_total=a1+a2+a3;
    ll b_total=b1+b2+b3;
    ll total=a_total+b_total;
    ll total_with_deliv2=total+(d*2);
    ll total_with_deliv1=total+(d);
    if(a_total>=150 && b_total>=150)
    {
        total+=c;
        if(total<total_with_deliv2)
        {
            cout<<"Yes"<<endl;
            return;
        }
        else{
            cout<<"No"<<endl;
            return;
        }

    }

    else if(a_total>=150 || b_total>=150)
    {
        total+=c;
        if(total<total_with_deliv1)
        {
            cout<<"Yes"<<endl;return;
        }
        else{
            cout<<"No"<<endl;return;
        }
    }
    else{
        cout<<"No"<<endl;
        return;

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