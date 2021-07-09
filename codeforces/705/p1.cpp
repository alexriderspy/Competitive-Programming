#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,lb;
        cin>>n>>k;
        if(n==1)
        {
            cout<<0<<endl;continue;
        }
        int ctr=n-k;
        ctr+=k/2;
        cout<<ctr<<endl;
        for(int i=(k%2!=0)?(k/2+1):(k/2);i<=k-1;i++)
        {
            cout<<i<<" ";
        }
        for(int i=k+1;i<=n;i++)
        {
            cout<<i<<" ";
        }

        cout<<endl;
    }
}