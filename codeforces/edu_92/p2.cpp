#include<bits/stdc++.h>

using namespace std;
void solve(){
	int n,k,z;
	cin>>n>>k>>z;
	vector<int>a;
	for(int i=1;i<=n;i++){
		int tmp;cin>>tmp;a.push_back(tmp);
	}
	int max_score=0,score=0;
	
	for(int i=0;i<=k;i++){
			score+=a[i];
	} 
	max_score=max(score,max_score); 
	
	
		//making exactly j moves to the left
		
		for(int j=1;j<=z;j++){
			int r=(k-2*j);
			if(r<0) r=k;
		//	cout<<j<<"it "<<r<<"r ";
			int pos=0,curr_max=(a[0]+a[1]);
			for(int l=0;l<=r && l<n-1;l++){
				if(a[l]+a[l+1]>curr_max){
					pos=l,curr_max=a[l]+a[l+1];
				}
			}
			
			score=0;
			if(r==k){
				for(int i=0;i<=k;i++){
					score+=a[i];
				}
				max_score=max(score,max_score); continue; 
			}
			score=0;
			for(int i=0;i<=r;i++){
				if(pos==i){
					score+=(a[i]+a[i+1])*j;
				}
				score+=a[i];
			}max_score=max(score,max_score);
		}
	
	
	
	cout<<max_score<<'\n';
	
}
int main(){
	int t;cin>>t;
	while(t--) solve();
}
