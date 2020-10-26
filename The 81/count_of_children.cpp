#include<bits/stdc++.h>
using namespace std;
const int maxN = 2e5+1;
vector<int>adj[maxN];
int vis[maxN],dist[maxN],cnt[maxN];

int dfs(int node)
{
    vis[node]=1;
    if(adj[node].size()==1)
    {
        return cnt[node]=1;
    }
    for(int child:adj[node])
    {
        if(!vis[child])
            dfs(child);
        cnt[node]+=cnt[child];
        dist[node]=dist[child]+cnt[child];
    }
}
int main()
{
    int n,a,b;
    cin>>n;
    for(int i=1;i<=n-1;i++)
    {
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    dfs(1);
    for(int i=1;i<=n;i++)
    {
        cout<<cnt[i]<<" ";cout<<dist[i]<<"\n";
    }
}
