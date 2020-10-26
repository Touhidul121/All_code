#include<bits/stdc++.h>
using namespace std;
bool vis[1000][1000];
vector<int>grid[1000];
int n,m;
bool isValid(int i,int j)
{
    if(i<1 || i>n || j<1 || j>m)
        return false;
    if(vis[i][j]==1 || grid[i][j]==0)
        return false;
    else
        return true;
}

void dfs(int x,int y)
{
    vis[x][y]=1;
     cout<<x<<","<<y<<"\n";
    if(isValid(x-1,y))
        dfs(x-1,y);
    if(isValid(x,y+1))
        dfs(x,y+1);
    if(isValid(x+1,y))
        dfs(x+1,y);
    if(isValid(x,y-1))
        dfs(x,y-1);
}

int main()
{

   cin>>n>>m;
   for(int i=1;i<=n;i++)
   {
       for(int j=1;j<=n;j++)
        cin>>grid[i][j];
   }
   int cnt=0;
   for(int i=1;i<=n;i++)
   {
       for(int j=1;j<=m;j++)
       {
           if(grid[i][j]==1 && vis[i][j]==0)
           {
               dfs(i,j);
               cnt++;
           }
       }
   }
}
