#include<bits/stdc++.h>

using namespace std;
#define ll long long 
void count(int &a,int &b,int &c,string t)
{
    a=0,b=0,c=0;
    for(int i=0;i<t.size();i++)
    {
        if(t[i]=='A') a++;
        else if(t[i]=='B') b++;
        else  c++;
    }
}
void solve()
{
    string s;
    cin>>s;
    
    int i;
    int n=s.size();
    
    int ctra,ctrb,ctrc;
    count(ctra,ctrb,ctrc,s);   
    if(ctra+ctrb==ctrc)
    {
        replace(s.begin(),s.end(),'A','B');        
    }
    else if(ctra+ctrc==ctrb)
    {
        replace(s.begin(),s.end(),'A','C');
    }
    else if(ctrc+ctrb==ctra)
    {
        replace(s.begin(),s.end(),'C','B');
    }    
    else{
        cout<<"No"<<endl;return;
    }
    char temp=s[0];
    int ctr=0;
    for(int i=0;i<n;i++)
    {
        while(s[i]==temp)
        {
            ctr++;i++;
            //cout<<ctr<<" ";
        }
        while(s[i]!=temp)
        {
            ctr--;
           // cout<<ctr<<" ";
            if(ctr<0){
                
                cout<<"No"<<endl;return;
            }
            
            i++;
            if(i==n) break;
        }
        if(i==n) break;
        i--;

    }
    if(ctr!=0)
    {
        cout<<"No"<<endl;
        return;
    }
    cout<<"Yes"<<endl;
    return;
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
}