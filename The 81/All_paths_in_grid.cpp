#include<bits/stdc++.h>
using namespace std;
bool vis[1000][1000];
int n,m;
int grid[100][100];

void dfs(int x,int y,vector<int>v)
{
    if(x>n || x<0 || y<0 || y>m)
        return;

    v.push_back(grid[x][y]);
    if(x==n && y==m)
    {
        for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
        cout<<"\n";return;
    }
        dfs(x,y+1,v);


        dfs(x+1,y,v);


   // v.pop_back();
}

int main()
{

   cin>>n>>m;
    int x,y;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>grid[i][j];
        }
    }
    vector<int>v;
    dfs(1,1,v);
}


