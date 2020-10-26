//Dijktras algorithm
#include<bits/stdc++.h>
#define INF 1000009
using namespace std;
vector<int>vec[505];
vector<int>cost[1600];

int dist[505]={0};

void bfs(int src)
{
    queue<int>q;
    q.push(src);
    dist[src]=0;

    int p,nxt_connected,temp;
    while(!q.empty())
    {
    p=q.front();
    q.pop();
    for(int i=0;i<vec[p].size();i++)
    {
     nxt_connected=vec[p][i];
     temp=max(dist[p],cost[p][i]);
     if(temp<dist[nxt_connected])
     {
         dist[nxt_connected]=temp;
         q.push(nxt_connected);
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
     vec[u].push_back(v);
     vec[v].push_back(u);
     cost[u].push_back(w);
     cost[v].push_back(w);

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
        vec[i].clear();
        cost[i].clear();

    }

  }
}
