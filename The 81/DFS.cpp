#include<bits/stdc++.h>
#define maxN 100001
using namespace std;

vector<int>adj[maxN];
int vis[maxN];

void dfs(int node)
{
    cout<<node<<" ";
    vis[node]=1;
    for(int child:adj[node])
    {
        if(!vis[child])
            dfs(child);
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
    dfs(1);
}
