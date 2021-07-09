#include<bits/stdc++.h>

using namespace std;

int Reflection(int s)
{
    int temp=s;
    int newnum;
    newnum=(temp/10)+10*(temp%10);
    if(newnum/10==5) newnum=newnum-30;
    else if(newnum/10==2) newnum=newnum+30;
    if(newnum%10==5) newnum-=3;
    else if (newnum%10==2) newnum+=3;
    return newnum;
}
bool isCorrect(int s)
{
    if(s/10==0 || s/10==1 || s/10==2 || s/10==5 || s/10==8 )
    {
        if(s%10==0 || s%10==1 || s%10==2 || s%10==5 || s%10==8 )
        {
            //cout<<s[0]<<" "<<s[1]<<" ";
            return true;
        }
    }
    return false;
}
bool ishrcorrect(int hr,int h)
{
    return (hr<h && hr>=0);
}
bool ismincorrect(int min,int m)
{
    return min<m && min>=0;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int h,m,hc=0,mc=0;
        cin>>h>>m;
        string s;
        cin>>s;
        vector<string>time;
        stringstream ss(s);
        while(ss.good())
        {
            string substr;
            getline(ss, substr, ':');
            time.push_back(substr);
        }
        //cout<<time[0]<<" "<<time[1]<<" ";
        stringstream hour(time[0]);
        stringstream mini(time[1]);
        hour>>hc;
        mini>>mc;
       // cout<<hc<<" "<<mc<<" ";
        while(1)
        {
            if(isCorrect(hc)&& isCorrect(mc))
            {
                int revmin=Reflection(hc);
                int revhr=Reflection(mc);
                cout<<revhr<<" "<<revmin<<" ";
                if(ishrcorrect(revhr,h)==0)
                {
                    cout<<"hrf ";
                    if(hc==h-1 )
                    {
                        hc=00;mc=00;
                    }
                    else{
                        hc++;mc=00;
                    }
                    continue;
                }
                if(ismincorrect(revmin,m)==0)
                {
                    cout<<"mmf ";
                    if(mc==m-1 && hc==h-1)  {  mc=00;hc=00;}
                    else if(mc==m-1) {hc++;mc=00;}
                    else {cout<<mc<<" ";mc++;}
                    continue;
                }
                if(hc/10!=0 && mc/10!=0)
                cout<<hc<<":"<<mc<<endl; //break;
                else if(hc/10==0 && mc/10!=0)
                cout<<'0'<<hc<<":"<<mc<<endl;
                else if(mc/10==0 && hc/10!=0)
                cout<<hc<<":"<<'0'<<mc<<endl;
                else
                cout<<'0'<<hc<<":"<<'0'<<mc<<endl;
                break;            
                }
            else if(isCorrect(hc)==0 && isCorrect(mc)!=0)
            {
                    if(hc==h-1 )
                    {
                        hc=00;mc=00;
                    }
                    else{
                        hc++;mc=00;
                    }
                    continue;

            }
            else if(isCorrect(hc)!=0 && isCorrect(mc)==0)
            {
                    if(mc==m-1 && hc==h-1)  {  mc=00;hc=00;}
                    else if(mc==m-1) {hc++;mc=00;}
                    else {cout<<mc<<" "; mc++;}
                    continue;

            }
            else
            {
                    if(hc==h-1 )
                    {
                        hc=00;mc=00;
                    }
                    else{
                        hc++;mc=00;
                    }
                    continue;

            }


        }
        
    }
}