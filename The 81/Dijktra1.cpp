#include<bits/stdc++.h>
using namespace std;

#define inf INT_MAX

vector<pair<int,int>>adj[1000];
vector<int>dist(100000,inf);

void dijktra(int src)
{
    priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>>>pq;
    pq.push({0,src});
    dist[src]=0;

    while(!pq.empty())
    {
        int cur=pq.top().second;
        int cur_d=pq.top().first;
        pq.pop();

        for(pair<int,int> neighbour:adj[cur])
        {
            if(cur_d+neighbour.second<dist[neighbour.first])
            {
                dist[neighbour.first]=cur_d+neighbour.second;
                pq.push({dist[neighbour.first],neighbour.first});
            }
        }
    }
}
int main()
{
    int n,m,a,b,w;
    cin>>n>>m;

    for(int i=1;i<=m;i++)
    {
      cin>>a>>b>>w;
      adj[a].push_back({b,w});
      adj[b].push_back({a,w});
    }
    dijktra(1);
    for(int i=1;i<=n;i++)
        cout<<dist[i]<<" ";
}
