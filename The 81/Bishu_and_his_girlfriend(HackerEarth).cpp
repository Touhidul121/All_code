#include<bits/stdc++.h>
using namespace std;

vector<int>adj[100002];
int vis[100002];
int dist[100002];

void dfs(int src,int d)
{
    if(!vis[src])
    {
        vis[src]=1;
        dist[src]=d;
        for(auto x:adj[src])
        {
            if(!vis[x])
            {
                dfs(x,d+1);
            }
        }
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
    dfs(1,0);
    int k,mn=INT_MAX,res=INT_MAX;

    cin>>k;
    for(int i=1;i<=k;i++){
        cin>>a;
        mn=min(dist[a],mn);
        if(dist[a]==mn)
            res=min(a,res);
    }

    cout<<res<<"\n";

}
