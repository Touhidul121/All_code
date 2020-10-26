#include<bits/stdc++.h>
using namespace std;

vector<int>adj[2001];
int vis[2001];
int col[2001];

bool bipartite(int node,int c)
{
    if(!vis[node])
    {
        vis[node]=1;
        col[node]=c;

        for(auto child:adj[node])
        {
            if(vis[child]==0)
            {
                bool res=bipartite(child,1^c);

                if(res==false)
                    return false;
            }
            else if(col[node]==col[child])
            {
               return false;
            }
        }
        return true;
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

    if(bipartite(1,0))
        cout<<"YES"<<"\n";
    else
        cout<<"NO"<<"\n";

        for(int i=1;i<=n;i++)
            cout<<vis[i]<<" ";
}
