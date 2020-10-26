#include<bits/stdc++.h>
using namespace std;

#define maxN 50100
vector<int>adj[maxN];
int par[50100],vis[maxN];
int start,n,a,b,end1;



void bfs(int src)
{
    queue<int>q;
    q.push(src);
    par[src]=-1;

    vis[src]=1;
    while(!q.empty())
    {
        int cur=q.front();
        q.pop();

        for(int child:adj[cur])
        {
            if(vis[child]==0)
            {
                par[child]=cur;
                vis[child]=1;
                if(child==end1){

                    return;
                }
                q.push(child);
            }
        }
    }
}
int main()
{


    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++){
        memset(par,0,sizeof(par));
        memset(vis,0,sizeof(vis));

    for(int i=0;i<50100;i++)
        adj[i].clear();

    cin>>n;

    for(int i=0;i<n;i++)
    {

        if(i==0)
            {
                cin>>a;start=a;
            }
        else{
        cin>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
        a=b;
        end1=b;
        }

    }


    for(int i=0;i<50100;i++){
        if(adj[i].size()>1)
        sort(adj[i].begin(),adj[i].end());
    }

    cout<<"Case "<<tc<<":\n";
    vector<int>v;
    bfs(start);
    while(end1!=-1)
    {
        v.push_back(end1);
        end1=par[end1];
    }

    reverse(v.begin(),v.end());
    for(int i=0;i<v.size()-1;i++)
        cout<<v[i]<<" ";
    cout<<v[v.size()-1]<<"\n";

    }
    return 0;
}
