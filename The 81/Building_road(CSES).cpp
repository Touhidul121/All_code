#include<bits/stdc++.h>
using namespace std;

#define maxN 100001
vector<int>adj[maxN];
int vis[maxN];

void dfs(int node)
{
    vis[node]=1;
    for(int child:adj[node])
    {
        if(!vis[child])
            dfs(child);
    }
}
int main()
{
    int n,m,a,b;
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    vector<int>ans;

    for(int i=1;i<=n;i++)
    {
        if(!vis[i])
        {
            ans.push_back(i);
            dfs(i);
        }
    }
    cout<<ans.size()-1<<"\n";
    for(int i=1;i<ans.size();i++)
    {
        cout<<ans[0]<<" "<<ans[i]<<"\n";
    }

}
