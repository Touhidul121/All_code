//counting connected components in 2D grid
#include<bits/stdc++.h>
using namespace std;
bool vis[1002][1002];
string grid[1002];
int n,m;

void dfs(int x,int y)
{
    vis[x][y]=true;
    if(x-1>=0 && x<n &&y>=0 && y<m && vis[x-1][y]==0 && grid[x-1][y]=='.' )
        dfs(x-1,y);
    if(x>=0 && x<n && y+1>=0 && y+1<m && vis[x][y+1]==0 && grid[x][y+1]=='.')
        dfs(x,y+1);
    if(x+1>=0 &&x+1<n && y>=0 && y<m && vis[x+1][y]==0 && grid[x+1][y]=='.')
        dfs(x+1,y);
    if(x>=0 && x<n && y-1>=0 && y-1<m && vis[x][y-1]==0 && grid[x][y-1]=='.')
        dfs(x,y-1);
}
int main()
{
 cin>>n>>m;
 for(int i=0;i<n;i++)
        cin>>grid[i];

 int cnt=0;

 for(int i=0;i<n;i++)
 {
     for(int j=0;j<m;j++)
     {
         if(grid[i][j]=='.'&&vis[i][j]==false)
         {
             dfs(i,j);
             cnt++;
         }
     }
 }

 cout<<cnt<<"\n";
}
