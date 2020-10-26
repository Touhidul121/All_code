#include<bits/stdc++.h>
using namespace std;
vector<int>adj[200001];
int vis[200001];
int cnt=0;
map<int,int>mp;

void dfs(int node)
{
    vis[node]=1;
    cnt++;

    for(int child:adj[node])
    {
       if(!vis[child])
            dfs(child);
    }
    mp[node]=cnt;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n,a;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>a;
            adj[i].push_back(a);
            adj[a].push_back(i);
        }
        for(int i=1;i<=n;i++)
        {
            if(!vis[i])
            {
                dfs(i);
                cnt=0;
            }
        }
        for(auto x:mp)
            cout<<x.second<<" ";
        cout<<"\n";
        mp.clear();
        for(int i=1;i<=n;i++)
            vis[i]=0,adj[i].clear();

    }
}
