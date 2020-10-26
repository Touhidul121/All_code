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
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        int n,e,a,b;
        cin>>n>>e;
        for(int i=1;i<=n;i++)
        {
            adj[i].clear();
            vis[i]=0;
        }
        for(int i=1;i<=e;i++)
        {
            cin>>a>>b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }

    bool f=true;
    for(int i=1;i<=n;i++)
    {
        if(!vis[i])
        {
            bool res=bipartite(i,0);
            if(res==false)
                f=false;
        }
    }
    cout<<"Scenario #"<<tc<<":\n";
    if(f==false)
        cout<<"Suspicious bugs found!"<<"\n";
    else
        cout<<"No suspicious bugs found!"<<"\n";
}
}
