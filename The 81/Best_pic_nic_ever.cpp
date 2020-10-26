#include<bits/stdc++.h>
#define fi(n, m)     for(int i=n; i<=m; i++)
using namespace std;
vector<int>adj[1009];
int ar[100], occ[1009], vis[1009];
int n, m, k, ans;
void dfs(int node)
{
    vis[node]=1;
    occ[node]++;
    if(occ[node]==k)
        ans++;
    for(int child:adj[node])
    {
        if(vis[child]==0)
            dfs(child);
    }
}
int main(){
    int t, cs=1, u, v;
    cin>>t;
    for(int tc=1;tc<=t;tc++){
        ans=0;
        cin>>k>>n>>m;
        for(int i=0;i<=k-1;i++)
            cin>>ar[i];
        for(int i=1;i<=m;i++){
            cin>>u>>v;
            adj[u].push_back(v);
        }
        for(int i=0;i<=n;i++)
            occ[i]=0;
        for(int j=0; j<k; j++){
            memset(vis,0,sizeof(vis));
            dfs(ar[j]);
        }
        cout<<"Case "<<tc<<": "<<ans<<endl;
        for(int i=0;i<=n;i++)
        adj[i].clear();
    }
    return 0;
}
