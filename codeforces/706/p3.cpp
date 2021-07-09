#include<bits/stdc++.h>

using namespace std;

#define ll long long
double dist(double a1,double b1,double a2,double b2){
    return sqrt((pow(abs(a1-a2),2)+(pow(abs(b1-b2),2))));
}
void solve(){
    vector<ll>a,b;
    ll n;
    cin>>n;
    for(ll i=0;i<(n*2);i++){
        ll temp1,temp2;
        cin>>temp1>>temp2;
        if(temp1==0){
            a.push_back(abs(temp2));
        }
        if(temp2==0){
            b.push_back(abs(temp1));
        }
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    double energy=0.0;
    for(ll i=0;i<n;i++){
        energy+=dist(b[i],0,0,a[i]);
    }
    printf("%.13f\n",energy);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}