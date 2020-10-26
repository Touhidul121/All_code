#include<bits/stdc++.h>
using namespace std;

#define maxN 200001
int n,m;

vector<int>adj[maxN];
int vis[maxN];

int cnt=0,cnt1=0;
bool f=true;
void dfs(int node)

{
   vis[node]=1;
   cnt++;

   if(adj[node].size()!=2)
        f=false;

   for(int child:adj[node])
   {
       if(!vis[child])
        dfs(child);
   }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    cin>>n>>m;
    int a,b,ans=0;
    for(int i=1;i<=m;i++)
    {
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    for(int i=1;i<=n;i++)
    {
        if(vis[i]==0)
        {
        cnt=0,f=true;
        dfs(i);

        if(cnt>2 && f)
            ans++;
        }
    }
    cout<<ans<<"\n";


}
