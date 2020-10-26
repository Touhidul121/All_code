//Dijktras algorithm
#include<bits/stdc++.h>
#define INF 1000009
using namespace std;
vector<pair<int,int>>adj[505];


int dist[505]={0};

void bfs(int src)
{
    queue<int>q;
    q.push(src);
    dist[src]=0;

    while(!q.empty())
    {
    int u=q.front();
    q.pop();
    for(pair<int,int>x:adj[u])
    {
     int v=x.first;
     int cost=x.second;
     int temp=max(dist[u],cost);
     if(temp<dist[v])
     {
         dist[v]=temp;
         q.push(v);
     }
    }
    }
}
int main()
{
  int t,n,e,cs=0;
  cin>>t;
  while(t--)
  {
   cin>>n>>e;
   int u,v,w;
   for(int i=0;i<e;i++)
   {
     cin>>u>>v>>w;
     adj[u].push_back({v,w});
     adj[v].push_back({u,w});


   }


    int src;
    cin>>src;
    for(int i=0;i<n;i++)
    dist[i]=INF;
    bfs(src);
    cout<<"Case "<<++cs<<":"<<"\n";
    for(int i=0;i<n;i++)
    {
        if(dist[i]==INF)
            cout<<"Impossible"<<"\n";
        else
            cout<<dist[i]<<"\n";
    }


    for(int i=0;i<n;i++)
    {
        adj[i].clear();

    }

  }
}
