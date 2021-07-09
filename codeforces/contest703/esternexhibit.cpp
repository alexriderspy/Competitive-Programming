#include<bits/stdc++.h>

using namespace std;

#define ll long long 
#define N 10007

void solve()
{
    ll n;cin>>n;
    vector<ll>a_x,a_y;
    a_x.reserve(n);
    a_y.reserve(n);
    for(ll i=0;i<n;i++)
    {
        ll x,y;
        cin>>x>>y;
        a_x.push_back(x);
        a_y.push_back(y);
    }                     //min sum of distances of a series of points = median  
    sort(a_x.begin(),a_x.end());
                                      //now sorted array by x
    sort(a_y.begin(),a_y.end());
    ll x_points,y_points;
    ll med_left=a_x[(n)/2];
    ll med_right=a_x[(n-1)/2];
    x_points=(med_left-med_right)+1;
    ll med_top=a_y[(n)/2];
    ll med_bottom=a_y[(n-1)/2];
    y_points=(med_top-med_bottom)+1;
    ll total=x_points*y_points;
    cout<<total<<"\n";
    a_y.clear();
    a_x.clear();
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }    
}