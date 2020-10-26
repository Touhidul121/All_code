#include<bits/stdc++.h>
using namespace std;
const int maxN = 1e5+1;
vector<pair<int,int>>adj[maxN];
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);cout.tie(NULL);

   int n,m,k,a,b,w,x;
   cin>>n>>m>>k;

   for(int i=0;i<m;i++)
   {
       cin>>a>>b>>w;
       adj[a].push_back({b,w});
       adj[b].push_back({a,w});
   }

   int res=INT_MAX;
   set<int>st;
   vector<int>v;
   for(int i=0;i<k;i++)
   {
       cin>>a;
       v.push_back(a);
       st.insert(a);
   }
   for(int i=0;i<k;i++)
   {
     x=v[i];
     if(adj[x].size()>0)
     {
         for(int j=0;j<adj[x].size();j++)
         {
           if(st.find(adj[x][j].first)==st.end())
           res=min(res,adj[x][j].second);
         }
     }
   }
   if(res==INT_MAX)cout<<-1<<"\n";
   else
   cout<<res<<"\n";
}
