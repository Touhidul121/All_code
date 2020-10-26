#include<bits/stdc++.h>
#define maxN 100001
using namespace std;
vector<int>adj[maxN];
int vis[maxN];

void bfs(int src)
{
    queue<int>q;
    q.push(src);
    cout<<src<<" ";
    vis[src]=1;

    while(!q.empty())
    {
        int cur=q.front();
        q.pop();

        for(int child:adj[cur])
        {
            if(!vis[child])
            {
               cout<<child<<" ";
               vis[child]=1;
               q.push(child);
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int node,edge,a,b;
    cin>>node>>edge;

    for(int i=1;i<=edge;i++)
    {
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    bfs(1);
}
