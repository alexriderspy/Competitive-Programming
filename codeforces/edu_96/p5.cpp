#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define sz(x) (int)x.size()

void merge(vector<int>&v,int start, int mid, int stop,ll *invcnt){
    int i=start,j=mid+1,k=0;
    vector<int>tmp(stop-start+1,0);
    while(i<=mid && j<=stop){
        if(v[i]<=v[j]){
            tmp[k]=v[i];
            i++;k++;
            
        }
        else{
            tmp[k]=v[j];
            j++;k++;
            (*invcnt)+=(mid-i+1);
        }    
    }
    while(i<=mid){
        tmp[k++]=v[i++];
    }
    while(j<=stop){
        tmp[k++]=v[j++];
    }
    for(int i=start,k=0;i<=stop;i++,k++) v[i]=tmp[k];
}

void mergesort(vector<int>&v,int start,int stop,ll *invcnt){
    if(start==stop) return;
    int mid=(start+stop)/2;
    mergesort(v,start,mid,invcnt);
    mergesort(v,mid+1,stop,invcnt);
    merge(v,start,mid,stop,invcnt);
}

void solve(){
	int n;
	cin>>n;
	string s;
    cin>>s;
    vector<int>v(n,0);
    for(char ch='a';ch<='z';++ch){
        vector<int>index;
        for(int i=0;i<n;i++){
            if(s[i]==ch){
                index.push_back(i);
            }
        }
        int val,j=sz(index)-1;
        int i=0;
        while(j>=0){
            val=index[j];
            v[index[i]]=val;
            i++,j--;
        }
        index.clear();
    }
    
    reverse(v.begin(),v.end());
    
    //count no. of inversions
    ll invcnt=0;
    mergesort(v,0,n-1,&invcnt);
    cout<<invcnt<<'\n';
}
int main()

{
    //ios_base::sync_with_stdio(false), cin.tie(0);
    //ll t;cin>>t;
    solve();
}

   
