#include<bits/stdc++.h>
using namespace std;
bool vis[1000][1000];
int n,m;
bool isValid(int i,int j)
{
    if(i<1 || i>n || j<1 || j>m)
        return false;
    if(vis[i][j]==1)
        return false;
    else
        return true;
}

void dfs(int x,int y)
{
    vis[x][y]=1;
     cout<<x<<" "<<y<<"\n";
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
   int x,y;
   cin>>x>>y;
   dfs(x,y);
}

