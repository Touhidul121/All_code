#include<bits/stdc++.h>
using namespace std;

vector<int>adj[100001];
int in[100001],low[100001],vis[100001],timer;
bool hasbridge;
vector<pair<int,int>>v;
void dfs(int node,int par)
{
    vis[node]=1;
    in[node]=low[node]=timer;
    timer++;

    for(int child:adj[node])
    {
        if(child==par)continue;
        if(vis[child]==1)
        {
            low[node]=min(low[node],in[child]);
            if(in[node]>in[child])
            v.push_back({node,child});
        }
        else
        {
            dfs(child,node);
            if(low[child]>in[node])
            {
                hasbridge=true;
                return;
            }
            v.push_back({node,child});
            low[node]=min(low[node],low[child]);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,m,a,b;
    cin>>n>>m;

    for(int i=1;i<=m;i++)
    {
     cin>>a>>b;
     adj[a].push_back(b);
     adj[b].push_back(a);
    }
    dfs(1,-1);

    if(hasbridge)
    cout<<0<<"\n";
    else
    {
     for(pair<int,int>p:v)
        cout<<p.first<<" "<<p.second<<"\n";
    }

}
