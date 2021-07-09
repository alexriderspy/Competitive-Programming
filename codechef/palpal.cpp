#include<bits/stdc++.h>

using namespace std;

#define ll long long

int counting(vector<int>a)
{
    int counter=0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]%2==0)
        counter++;
    }
    return counter;

}
bool solve()
{
    string s;
    cin>>s;
    vector<int>val;
    val.reserve(27);
    sort(s.begin(),s.end());
    int i=0;
    for(char x='a';x<='z';x++)
    {
        int c=0;
        while(s[i]==x)
        {
            c++;
            i++;
        }
        val.push_back(c);
    }

    
    sort(val.begin(),val.end());
    
    int zeroes=count(val.begin(),val.end(),0);
    val.erase(val.begin(),val.begin()+zeroes);
    
    int ones=count(val.begin(),val.end(),1);
    val.erase(val.begin(),val.begin()+ones);
    int sum=0;
    for(int i=0;i<val.size();i++)
    {
        if(val[i]%2==0)
        {
            val[i]/=2;
        }
        else{
            val[i]=(val[i]-3)/2;
        }
        sum+=val[i];
    }

    if(sum>=ones)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        if(solve())
        {
            cout<<"Yes"<<endl;
       
        }
        else{
            cout<<"No"<<endl;
        }
}
}