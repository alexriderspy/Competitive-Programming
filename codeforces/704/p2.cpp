#include<bits/stdc++.h>
using namespace std;
#define ll long long int

vector<ll> final;

ll max(vector<ll> &a,ll n)
{
	ll maxi=a[0];
	ll index=0;
	for (ll i=0;i<n;i++)
	{
		if(maxi<a[i])
		{
			maxi=a[i];
			index=i;
		}
	}
	//cout<<index<<endl;
	return index;
	
}

void array_form (vector<ll> &a,ll n,ll l)             //when u have a vector pass it as a reference not the entire vector
{
	if(n==0)
	return;
	
	ll max_index=max(a,n);
	ll index=max_index;
	for(ll i=l;i<abs(n-max_index)+l;i++)
	{
		final[i]=a[index++];
		
	//	cout<<final[i]<<" ";
	}
	for(ll j=1;j<=abs(n-max_index);j++)	a.pop_back();
	array_form(a,a.size(),abs(n-max_index)+l);
	//cout<<endl;
	
}


int main()
{
	long int t;
	cin>>t;
	while(t--)
	{
		ll n,i,j;
		cin>>n;
		final.reserve(n);
		vector<ll> a(n);
		//a.reserve(n);
		for( i =0;i<n;i++)
		{
			cin>>a[i];
		}
		array_form(a,n,0);
		for( i =0;i<n;i++)
		{
			cout<<final[i]<<" ";
		}
		cout<<endl;
        final.clear();
	}
}
