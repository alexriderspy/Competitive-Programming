#include<bits/stdc++.h>

using namespace std;

#define ll long long
int index(vector<ll>a)
{
    ll max=a[0];
    int j=0;
    for(int i=0;i<a.size();i++)
    {   
        if(a[i]>max)    
        {
            max=a[i];
             j=i;
        }

    }
    return j;
    
}
int max(vector<ll>a)
{
    ll max=a[0];
   
    for(int m=0;m<a.size();m++)
    {   
        if(a[m]>max)    
        {
            max=a[m];
   //          j=i;
        }

    }
    //return j;
    return max;
    
}
int solve()
{
    vector<ll>diff;
    diff.reserve(20);
    for(int i=0;i<10;i++)
    {
        cin>>diff[i];
    }
    ll k;
    cin>>k;
    for(int i=9;i>=0;i--)
    {
        if(diff[i]>k)
        {
            diff[i]-=k;
            return (i+1);
        }
        if(diff[i]==k)
        {
            diff[i]-=k;
            k=0;
            continue;
        }
        if(diff[i]<k)
        {
            k-=diff[i];
            diff[i]=0;
            continue;
        }

        
    }
    diff.clear();


}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        int val=solve();
        cout<<val<<endl;
    }
}