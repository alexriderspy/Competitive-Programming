#include<iostream>
#include<string>

#define N 100000
using namespace std;

#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll pts[N];
        string ver[N];
        for(ll i=0;i<k;i++)
        {
            cin>>pts[i];
        }
        for(ll i=0;i<n;i++)
        {
            cin>>ver[i];
            for(ll m=0;m<k;m++)
            {
                ver[i][m]=ver[i][m]-'0';
            }
        }
        for(ll i=0;i<n;i++)
        {
           // string str=ver[i];
            
            //cout<<str<<" ";
            ll score=0;
            for(ll j=0;j<k;j++)
            {
                
                score=score+pts[j]*ver[i][j];
              //  cout<<score<<" ";
            }
            cout<<score<<endl;
        }

    }
}