#include<bits/stdc++.h>
using namespace std;

vector<int>adj[100001];
int vis[200001];
int col[200001];

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
                bool res=true;
                if(c==1){
                 res=bipartite(child,2);
                }
                else
                     res=bipartite(child,1);

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
    bool res=true;
    for(int i=1;i<=n;i++)
    {
        if(!vis[i])
        {
            res=res&bipartite(i,1);
        }
    }
   if(res==false)
    cout<<"IMPOSSIBLE"<<"\n";
   else{
        for(int i=1;i<=n;i++)
            cout<<col[i]<<" ";
   }
}






