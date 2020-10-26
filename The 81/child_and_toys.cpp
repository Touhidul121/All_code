#include<bits/stdc++.h>
#define inf 1<<26
using namespace std;

vector<pair<int,int>>adj[1002];
int ans;


int main()
{
    int n,e,a,b;
    cin>>n>>e;
    int cost[n+1];

    for(int i=1;i<=n;i++)
        cin>>cost[i];

    for(int i=1;i<=e;i++)
    {
        cin>>a>>b;
        adj[a].push_back({b,cost[b]});
        adj[b].push_back({a,cost[a]});
    }
    int x=0,mn=inf,loc;
         for(int k=1;k<=n;k++){
       for(int i=1;i<=n;i++)
       {

           for(int j=0;j<adj[i].size();j++)
           {
               x+=adj[i][j].second;
           }

           if(mn>x)
           {
               mn=x;
               loc=i;
           }
           x=0;

       }
       adj[loc].clear();
      ans+=mn;
      mn=inf;
}
    cout<<ans<<"\n";
}
