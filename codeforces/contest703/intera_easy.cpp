#include<bits/stdc++.h>

using namespace std;

int query(int l,int r)
{
    printf("? %d %d\n",l,r);
    fflush(stdout);
    int ans;
    scanf("%d",&ans);
    
    return ans;
}

void answer(int x)
{
    printf("! %d\n",x);
    fflush(stdout);
}
int main()
{
    int n;
    scanf("%d",&n);
    int x=query(1,n);
    bool left=false;
    if(x!=1 && query(1,x)==x)
    {
        left=true;
    }
    if(left)
    {
        int l=1,r=x-1;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(query(mid,x)==x) l=mid+1;
            else r=mid-1;
        }
        answer(r);
    }
    else
    {
        int l=x+1,r=n;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(query(x,mid)==x) r=mid-1;
            else l=mid+1;
        }
        answer(l);
    }
}