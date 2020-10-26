#include<bits/stdc++.h>
using namespace std;
#define maxN 300001
vector<int>adj[maxN];
int vis[maxN];
int mx,mx_node;

void dfs(int node,int d)
{
    vis[node]=1;
    if(mx<d)
    {
        mx=d;
        mx_node=node;
    }
    for(int child:adj[node])
        if(!vis[child])dfs(child,d+1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int n,a,b;
    cin>>n;
    for(int i=1;i<=n-1;i++)
    {
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    dfs(1,0);
    memset(vis,0,sizeof(vis));
    dfs(mx_node,0);
    cout<<mx*3<<"\n";
}
