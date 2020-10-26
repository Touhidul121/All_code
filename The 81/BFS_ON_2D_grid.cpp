#include<bits/stdc++.h>
using namespace std;

bool vis[200][200];
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
int n,m;
char grid[100][100];
bool isValid(int i,int j)
{
    if(i<1 || i>n || j<1 || j>m)
        return false;
    if(vis[i][j]==1 && grid[i][j]!='#')
        return false;
    else
        return true;
}
void bfs(int srcX,int srcY)
{
    queue<pair<int,int>>q;
    q.push({srcX,srcY});
    vis[srcX][srcY]=1;
    cout<<srcX<<" "<<srcY<<"\n";

    while(!q.empty())
    {
        int curX=q.front().first;
        int curY=q.front().second;
        q.pop();

        for(int i=0;i<4;i++)
        {
            int newX=curX+dx[i];
            int newY=curY+dy[i];
            if((newX>=1 && newX<=n && newY>=1 && newY<=m) && vis[newX][newY]==0 && grid[newX][newY]=='.')
            {
                cout<<newX<<" "<<newY<<"\n";

                vis[newX][newY]=1;
                q.push({newX,newY});
            }
        }
    }
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

            if(grid[i][j]=='.')
            {
                x=i;
                y=j;
            }
        }
    }

    bfs(x,y);
}
