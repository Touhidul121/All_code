#include<bits/stdc++.h>
using namespace std;

vector<int>adj[100002];
int vis[100002];
int subsize[100002];
int dfs(int node)
{
 if(!vis[node]){

     vis[node]=1;
     int cur_size=1;

     for(int x:adj[node])
     {
         if(vis[x]==0)
         {
             cur_size+=dfs(x);
         }
     }
     subsize[node]=cur_size;
     return cur_size;
 }
}

int main()
{
    int n,a,b;
    cin>>n;
    for(int i=1;i<=n-1;i++)
    {
        cin>>a>>b;
        adj[a].push_back(i);
        adj[b].push_back(a);
    }
    dfs(1);
    for(int i=1;i<=n;i++)
        cout<<subsize[i]<<" ";
}
