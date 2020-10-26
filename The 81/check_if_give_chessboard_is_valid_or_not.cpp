#include<bits/stdc++.h>
using namespace std;
#define maxN 1001
int grid[maxN][maxN];

int dx[]={0,-1,0,1};
int dy[]={1,0,-1,0};

bool isValid(int n)
{
    bool f=true;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<4;k++)
            {
              int newX=i+dx[k];
              int newY=j+dy[k];

              if(newX>=0 && newX<n && newY>=0 && newY<n)
              {
                  if(grid[i][j]==grid[newX][newY])
                  {
                      f=false;break;
                  }
              }
            }
            if(!f)break;
        }
        if(!f)break;
    }
    return f;
}
int main()
{
 int n;
 cin>>n;
 for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
        cin>>grid[i][j];

 if(isValid(n))
    cout<<"The board is valid"<<"\n";
 else
    cout<<"The board is invalid"<<"\n";
}
