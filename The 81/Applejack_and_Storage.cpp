#include<bits/stdc++.h>
using namespace std;

char grid[101][101];

int n,m,cnt;

void bfs(int srcX,int srcY)
{
    queue<pair<int,int>>q;
    q.push({srcX,srcY});

    while(!q.empty())
    {
        int curX=q.front().first;
        int curY=q.front().second;
        q.pop();

        int newX,newY;
        if(grid[curX][curY]=='R')
        {
          newX=curX;
          newY=curY+1;
          if(newY>m)
          {

              newX=curX+1;
              newY=curY;
              cnt++;
              if(newX==n && newY==m)
                return;

          }
        }

        else if(grid[curX][curY]=='D')
        {
          newX=curX+1;
          newY=curY;
          if(newX>n)
          {

              newX=curX;
              newY=curY+1;
              cnt++;
              if(newX==n && newY==m)
                return;

          }
        }

        q.push({newX,newY});

        }

}

int main()
{
    int t;
    cin>>t;
    while(t--){
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>grid[i][j];
        }

    }
    bfs(1,1);
    cout<<cnt<<"\n";
    }
}

