#include<bits/stdc++.h>
using namespace std;
vector<int>adj[200000];
int vis[200000];

bool cycle(int node,int parent)
{
    if(!vis[node])
    {
        vis[node]=1;
        for(int x:adj[node])
        {
            if(vis[x]==1)
            {
                if(x!=parent)
                    return true;
            }
            else
                cycle(x,node);
        }
    }
}
int main()
{

    int n,e,a,b;
    cin>>n>>e;
    for(int i=1;i<=e;i++)
    {
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    int cnt=0;

    for(int i=1;i<=n;i++)
    {
        if(!vis[i])
        {
            bool res=(i,-1);
            if(res==true)
                cnt++;
        }
    }
    cout<<cnt<<"\n";
}
