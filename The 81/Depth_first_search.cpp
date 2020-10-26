#include<bits/stdc++.h>
using namespace std;


class graph
{
    int v;
    list<int> *adj;
    bool *visited;
    void dfs(int v,bool visited[]);

public:
    graph(int v);

    void addEdge(int v,int w);

    void dfs(int v);
    void dfs1(int v);
};

graph::graph(int v)
{
    this->v=v;
    adj=new list<int>[v];
}

void graph::addEdge(int v,int w)
{
    adj[v].push_back(w);
}

void graph::dfs(int v,bool visited[])
{
    visited[v]=true;
    cout<<v<<" ";

    list<int>::iterator i;

    for(i=adj[v].begin();i!=adj[v].end();i++)
    {
        if(!visited[*i])
        {
            dfs(*i,visited);
        }
  }  }

void graph::dfs1(int v)
    {
        bool *visited=new bool[v];
        for(int i=0;i<v;i++)
            visited[i]=false;

        dfs1(v);
    }


int main()
{
    // Create a graph given in the above diagram
    int n,k,a,b;
    cin>>n;
    graph g(n);
    for(int i=0;i<n-1;i++){
            cin>>a>>b;
    g.addEdge(a, b);
//    g.addEdge(0, 2);
//    g.addEdge(1, 2);
//    g.addEdge(2, 0);
//    g.addEdge(2, 3);
//    g.addEdge(3, 3);
    }

    cout << "Following is Depth First Traversal"
            " (starting from vertex 2) \n";
    g.dfs(1);

    return 0;
}
