#include<bits/stdc++.h>
using namespace std;
bool vis[1000][1000];
int n,m;
vector<vector<int>>grid;
int ans;bool f=false;

void dfs(int x,int y,vector<vector<int>>grid)
{
    vis[x][y]=1;


    if(x>=0 && x<n && y+1>=0 && y+1<m && vis[x][y+1]!=1 && grid[x][y+1]!=-1)
        dfs(x,y+1,grid);
    if(x+1>=0 && x+1<n && y>=0 &&y<m && vis[x+1][y]!=1 && grid[x+1][y]!=-1)
        dfs(x+1,y,grid);
    if(x==n-1 && y==m-1)
    f=true;

    ans+=grid[x][y];

}

int main()
{

   cin>>n>>m;
    int x,y,a;
    for(int i=0;i<n;i++)
    {
        vector<int>v;
        for(int j=0;j<m;j++)
        {
            cin>>a;
            v.push_back(a);
        }
        grid.push_back(v);
    }

    dfs(0,0,grid);
    cout<<ans<<"\n";
}
