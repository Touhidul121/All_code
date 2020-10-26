#include<bits/stdc++.h>
using namespace std;
const int V=5;
vector<int> adj[V];
bool vis[V];

void dfs(int s)
{

 cout<<s<<" ";
 vis[s]=true;
 for(auto v:adj[s])
 {

     if(!vis[v])
        dfs(v);
 }


}
void bfs(int s)
{
   queue<int> q;
cout<<s<<" ";
vis[s]=true;
q.push(s);
while(!q.empty())
{
    int u=q.front();
    q.pop();
    for(auto v:adj[u])
    {
        if(!vis[v])
        {
          cout<<v<<" ";
          vis[v]=true;
          q.push(v);
        }
    }
}
}

int main()
{




    for(int i=0;i<V-1;i++)
    {
        int u,v;
        int edge;
        cin>>edge;
        while(edge--){
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        }
    }
    for (int v = 0; v < V; ++v)
    {
        cout << "\n Adjacency list of vertex "
             << v << "\n head ";
        for (auto x : adj[v])
           cout << "-> " << x;
        printf("\n");
    }
    cout<<"BFS"<<endl;
    //bfs(0);

    cout<<"\n----------DFS---------"<<endl;
    dfs(0);
}
