#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#define ll long long 

//const ll MAX=2*1e5 +9

using namespace std;

int main()
{
    ll s_n,t_n;
    string s,t;
    cin>>s_n>>t_n>>s>>t;
    //map<char,ll> m;
    vector<ll>index_left;
    vector<ll>index_right;
    
    index_right.reserve(t_n);
    index_left.reserve(t_n);

              
    //index.reserve(t_n);                     //cin>>s>>t in this way takes in 2 input strings in 2 different lines..wow
    for(ll i=0;i<s_n;i++)
    {
        cin>>s[i];
    }
    for(ll i=0;i<t_n;i++)
    {
        cin>>t[i];
    }
    for(ll i=0,j=0;i<s_n && j<t_n;i++)
    {
        if(s[i]==t[j])
        {
            j++;
            index_left.push_back(i);
        }
    }
    for(ll i=s_n-1,j=t_n-1;i>=0 && j>=0;i--)
    {
        if(s[i]==t[j])
        {
            j--;
            index_right.push_back(i);
        }
    }
    reverse(index_right.begin(),index_right.end());
    ll ans=0;
    for(ll i=0;i<t_n-1;i++)
    {
        ans=max(index_right[i+1]-index_left[i],ans);

    } 
    cout<<ans<<endl;

}
