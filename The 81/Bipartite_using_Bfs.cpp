#include<bits/stdc++.h>
using namespace std;

vector<int>adj[20002];
int cnt1,cnt2;
int color[20002];
#define white 0
#define red 1
#define blue 2

bool bipartite(int src) {

    queue<int> q;

        color[src]=red;
         cnt1++;
    q.push(src);
    while (!q.empty()) {
            int cur=q.front();
       q.pop();

       for(int child:adj[cur])
       {
           if(color[child]==white)
           {
               q.push(child);
               if(color[cur]==red)
               {
                   color[child]=blue;
                   cnt2++;
               }
               else
               {
                   color[child]=red;
                   cnt1++;
               }
           }
           else if(color[child]==color[cur])
            return false;
       }
    }


}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int n,m,a,b;
    cin>>n>>m;

    for(int i=1;i<=m;i++)
    {
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);


    }
     for(int i=1;i<=n;i++)
        color[i]=white;

    if(bipartite(1))
        cout<<"YES"<<"\n";
    else
        cout<<"NO"<<"\n";



}




