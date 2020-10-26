#include<bits/stdc++.h>
using namespace std;
bool vis[1002][1002];
char grid[1002][1002];
int n,m;
bool isValid(int i,int j)
{
    if(i<1 || i>n || j<1 || j>m)
        return false;
    if(vis[i][j]==true || grid[i][j]=='#')
        return false;
    else
        return true;
}

void dfs(int x,int y)
{
    vis[x][y]=true;
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
       for(int j=1;j<=m;j++)
        cin>>grid[i][j];
   }
   int cnt=0;
   for(int i=1;i<=n;i++)
   {
       for(int j=1;j<=m;j++)
       {
           if(grid[i][j]=='.' && vis[i][j]==false)
           {
               dfs(i,j);
               cnt++;
           }
       }
   }
   cout<<cnt<<"\n";
}

