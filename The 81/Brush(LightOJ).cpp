#include<bits/stdc++.h>
#define pii pair<int,int>
#define INF 1e6
using namespace std;
const int maxN = 105;

vector<pii>adj[maxN];
vector<int>dist(maxN);

void dijktra(int src)
{
    priority_queue<pii,vector<pii>,greater<pii>>pq;
    pq.push({0,src});
    dist[src]=0;

    while(!pq.empty())
    {
        int current_distance=pq.top().first;
        int current_node=pq.top().second;

        pq.pop();

        if(current_distance>dist[current_node])
            continue;

        for(pair<int,int> x:adj[current_node])
        {
            int u=current_node;
            int v=x.first;
            int cost=x.second;

            if(dist[u]+cost<dist[v])
            {
                dist[v]=dist[u]+cost;
                pq.push({dist[v],v});
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int t,r=0;

    cin>>t;
    while(t--)
    {
        r++;
        int n,m,a,b,w;
        cin>>n>>m;
        for(int i=0;i<maxN;i++)
        {
            adj[i].clear();dist[i]=INF;
        }

        for(int i=0;i<m;i++)
        {
            cin>>a>>b>>w;
            adj[a].push_back({b,w});
            adj[b].push_back({a,w});
        }
        dijktra(1);
        cout<<"Case "<<r<<": ";
        dist[n]==INF? cout<<"Impossible\n" : cout<<dist[n]<<"\n";
    }
}
