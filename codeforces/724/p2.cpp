#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string s;cin>>s;
    
    int d=0;
    for(int i=0;i<26;i++){
         
        char ch='a'+d++;
       
        size_t f=s.find(ch);
        if(f==string::npos){
            cout<<ch<<'\n';return;
        }
    }
    d=0;
    for(int i=0;i<26;i++){
        char ch1='a'+d++;
        int l=0;
        for(int j=0;j<26;j++){
            char ch2='a'+l++;
            string tmp=""; tmp+=ch1;tmp+=ch2;
            size_t f=s.find(tmp);
            if(f==string::npos){
                cout<<tmp<<"\n";return;
            }
        }
    }
    d=0;
    for(int i=0;i<26;i++){
        char ch1='a'+d++;
        int l=0;
        for(int j=0;j<26;j++){
            char ch2='a'+l++;
            int m=0;
            for(int k=0;k<26;k++){
                char ch3='a'+m++;
                string tmp=""; tmp+=ch1;tmp+=ch2,tmp+=ch3;
                size_t f=s.find(tmp);
                if(f==string::npos){
                    cout<<tmp<<"\n";return;
                }
            }
        }
    }

}
int main(){
    int t;cin>>t;
    while(t--) solve();
}