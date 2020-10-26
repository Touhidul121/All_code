#include<bits/stdc++.h>
using namespace std;

bool vis[10][10];
int dist[100][100];
char grid[100][100];
int dx[]={-2,-1,1,2,2,1,-1,-2};
int dy[]={1,2,2,1,-1,-2,-2,-1};
int endX,endY;
bool isValid(int i,int j)
{
    if(i<1 || i>8 || j<1 || j>8)
        return false;
    if(vis[i][j]==1)
        return false;
    else
        return true;
}
void bfs(int srcX,int srcY)
{
    queue<pair<int,int>>q;
    q.push({srcX,srcY});
    dist[srcX][srcY]=0;
    vis[srcX][srcY]=1;

    while(!q.empty())
    {
        int curX=q.front().first;
        int curY=q.front().second;

        q.pop();

        for(int i=0;i<8;i++)
        {
            int newX=curX+dx[i];
            int newY=curY+dy[i];
            if(isValid(newX,newY))
            {
                dist[newX][newY]=dist[curX][curY]+1;
                vis[newX][newY]=1;
                q.push({newX,newY});
            }
        }
    }
}

int main()
{

    int t;
    cin>>t;
    while(t--){
            int startX,startY;
    for(int i=1;i<=8;i++)
    {
        for(int j=1;j<=8;j++)
        {
            vis[i][j]=0;
        }
    }
    string a,b;
    cin>>a>>b;
    startX=a[0]-'a'+1;
    startY=a[1]-'0';
    endX=b[0]-'a'+1;
    endY=b[1]-'0';


    bfs(startX,startY);
    cout<<dist[endX][endY]<<"\n";
    }
}


