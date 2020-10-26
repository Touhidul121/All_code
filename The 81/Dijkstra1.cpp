#include<bits/stdc++.h>
#define inf 100000

using namespace std;

typedef pair<int,int> ipair;

void dijkstra(vector<pair<int,int> > adj[], int vertex, int src)
{
    priority_queue<ipair,vector<ipair>,greater<ipair>> q;

    vector<int> dist(vertex, inf);

    dist[src]=0;
    q.push(make_pair(dist[src],src));

    while(!q.empty())
    {


        int u=q.top().second;

        q.pop();

        for(auto x:adj[u])
        {
            int v=x.first;
            int w=x.second;

            if(dist[v]>dist[u]+w)
            {
                dist[v]=dist[u]+w;
                q.push(make_pair(dist[v],v));
            }
        }
    }
    for(int i=0;i<vertex;i++)
        cout<<"dist "<<i<<" "<<dist[i]<<"\n";
}

int main()
{

 int V = 9;
    vector<pair<int,int>>adj[V];

    cout<<"Enter number of Edges"<<"\n";
    int e;
    cin>>e;
    //freopen("input1.txt","r",stdout);
    int u,v,w;
    for(int i=0;i<e;i++)
    {
        cin>>u>>v>>w;
        adj[u].push_back(make_pair(v,w));
        adj[v].push_back(make_pair(u,w));
    }
    dijkstra(adj,V,0);
}
