#include<bits/stdc++.h>

using namespace std;


class graph
{
    int v;

    list<int> *adj;

public:
    graph(int v);

    void addEdge(int v,int w);

    void bfs(int s);
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

void graph::bfs(int s)
{
    bool *visited;
    visited=new bool[v];

    for (int i=0;i<v;i++)
    {
        visited[i]=false;
    }

    list<int> queue1;

    visited[s]=true;

    queue1.push_back(s);

    list<int>::iterator i;

    while(!queue1.empty())
    {
        s=queue1.front();
        cout<<s<<" ";
        queue1.pop_front();

        for(i=adj[s].begin();i!=adj[s].end();i++)
        {
            if(!visited[*i])
            {
                visited[*i]=true;
                queue1.push_back(*i);
            }
        }
    }
}
int main()
{
  graph g(6);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 4);
    g.addEdge(2, 5);
    g.addEdge(3, 5);
    g.addEdge(4, 2);
    g.addEdge(4, 5);
    g.addEdge(4, 6);
    g.addEdge(5, 3);
    g.addEdge(5, 2);
    g.addEdge(5, 4);
    g.addEdge(6, 4);
    g.addEdge(6, 5);


    cout << "Following is Breadth First Traversal "
         << "(starting from vertex 2) \n";
    g.bfs(2);

    return 0;
}

