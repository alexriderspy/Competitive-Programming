#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,fh=0,fl=0,fe=0;cin>>n;
    vector<float>f_equal;
    float sum=0.0;
    float newsum=0.0;
    for(int i=0;i<2*n;i++) {
        float x;cin>>x;sum+=x;
        
        if((int)x==ceil(x) || x==(ceil(x)+floor(x))/2.0 ) f_equal.push_back(x),fe++;
        else if(x> (ceil(x)+floor(x))/2.0) fh++,newsum+=(ceil(x)*1.0);
        else  fl++,newsum+=floor(x)*1.0;
        
    }
   // cout<<fl<<" "<<fh<<" "<<fe<<'\n';
    int i;
    for(i=0;i<max((fh-fl),(fl-fh));i++){
        newsum+=floor(f_equal[i])*1.0;
    }
    for(;i<fe;i+=2){
        newsum+=floor(f_equal[i]*1.0)+ceil(f_equal[i+1]*1.0);
    }

    float ans=abs(newsum-sum);
    cout<<ans<<"\n";
}

int main(){solve();}