#include<bits/stdc++.h>
using namespace std;

vector<int>adj[20002];
int cnt1,cnt2;
int color[20002];
#define white 0
#define red 1
#define blue 2

void bfs(int src) {

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
       }
    }


}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++){
    int n=20001,m,a,b;
    cin>>m;

    for(int i=1;i<=m;i++)
    {
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);


    }
     for(int i=1;i<=n;i++)
        color[i]=white;

    int ans=0;
    for(int i=1;i<=n;i++)
    {
        if(!adj[i].empty() &&color[i]==white)
        {
            cnt1=0,cnt2=0;
            bfs(i);
            ans+=max(cnt1,cnt2);
        }
    }

    cout<<"Case "<<tc<<": ";
    cout<<ans<<"\n";
    for(int i=1;i<=n;i++)
    {
        adj[i].clear();

    }

    }

}


