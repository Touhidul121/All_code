#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> l;
 bool M[2000][2000];
int color[2000];

bool bipartite(int &V)
{
    fill(color,color+V,-1);

    int aux,v;
    queue<int> q;

    for(int i=0;i<V;i++)
    {
        if(color[i]==-1)
        {
            color[i]=0;
            q.push(i);

            while(!q.empty())
            {
                aux=q.front();
                q.pop();

                for(int j=l[aux].size()-1;j>=0;j--)
                {
                    v=l[aux][j];
                    if(color[v]==color[aux])
                        return false;
                    if(color[v]==-1)
                    {
                        q.push(v);
                        color[v]=1-color[aux];
                    }
                }
            }
        }
    }
    return true;
}
int main()
{
  int T,V,E,u,v;
  cin>>T;

  for(int i=1;i<=T;i++)
  {
      cin>>V>>E;
      l.clear();
      l.resize(V);

      for(int i=0;i<V;i++)
        fill(M[i],M[i]+V,false);

      for(int i=0;i<E;i++)
      {
          cin>>u>>v;
          u--;
          v--;
          if(!M[u][v])
          {
              M[u][v]=M[v][u]=true;
              l[u].push_back(v);
              l[v].push_back(u);
          }
      }
      cout<<"Scenario #"<<i<<":"<<endl;
      if(bipartite(V))
        cout<<"NO suspicious bugs found!"<<endl<<endl;

      else
        cout<<"Suspicious bugs found!"<<endl<<endl;
  }
  return 0;
}
