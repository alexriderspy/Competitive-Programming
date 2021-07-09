#include<bits/stdc++.h>

using namespace std;
#define N 100000
#define ll long long


bool sortbysec(const pair<ll,ll> &a, 
              const pair<ll,ll> &b) 
{ 
    return (a.second < b.second); 
} 

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> a;
        vector<pair<ll,ll>>m;
        a.reserve(n);
        for( ll i=0;i<n;i++)
        {
            cin>>a[i];
            m.push_back(make_pair(a[i],i+1));
           // 
        }
        sort(m.rbegin(),m.rend());
 /*     for(ll i=0;i<n;i++)
        {
            cout<<m[i].first<<" "<<m[i].second<<endl;
        }*/
        ll t=m[0].first;
        m[0].first=1;
        for(ll i=1;i<n;i++)
        {
            if((m[i].first==t)||(i==1 && t==m[i].first))
            {
                m[i-1].first=t;
               // cout<<i-1<<" ";
                ll v_start=(i-1);
                while(m[i].first==m[i-1].first)
                {

                    i++;
                }
                ll v_end=--i;
               // cout<<v_start<<" "<<v_end<<endl;
                sort(m.begin()+v_start,m.begin()+v_end+1,sortbysec);
                for(ll j=v_start;j<=v_end;j++)
                {
                    m[j].first=j+1;
                }
                i=v_end;
                
            }
            else
            {
                t=m[i].first;
                m[i].first=i+1;
            }
        }
        sort(m.begin(),m.end(),sortbysec);
        for(ll i=0;i<n;i++)
        {
            cout<<m[i].first<<" ";
        }
        cout<<endl;

    }
}
