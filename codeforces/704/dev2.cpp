#include<iostream>

using namespace std;
const int M = 8;

void printArray(int sol[M][M])
{
    for(int i=0;i<M;i++)
    {   for(int j=0;j<M;j++)
            cout<<sol[i][j]<<"  ";
        cout<<endl;
    }
}

bool isSafe(int sol[M][M],int n,int x,int y)
{
    return (x>=0 && x<n && y>=0 && y<n && sol[x][y]==-1);
}

bool ktsol(int sol[M][M],int xmove[],int ymove[],int move,int x,int y)
{
    
    if(move==M*M)
    {
        return true;
    }
    for(int k=0;k<8;k++)
    {
        int next_x=x+xmove[k];
        int next_y=y+ymove[k];
        if(isSafe(sol,M,next_x,next_y))
        {
            sol[next_x][next_y]=move;
            if(ktsol(sol,xmove,ymove,move+1,next_x,next_y))
            {
                return true;
            }
            else
            {
                sol[next_x][next_y]=-1; //backtracking 
            }
        }
      
    }
    return false;

}
void ktutil(int sol[M][M],int n)
{
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            sol[i][j]=-1;

    int xmove[]={2,2,1,1,-1,-1,-2,-2};
    int ymove[]={1,-1,2,-2,2,-2,1,-1};
    sol[0][0]=0;

    if(ktsol(sol,xmove,ymove,1,0,0))
    {
        printArray(sol);
        return;
    }
    else
    {
        cout<<"no";
        return;
    }

}

int main()
{
    int sol[M][M];
    ktutil(sol,M);
}
