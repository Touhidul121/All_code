#include<bits/stdc++.h>
using namespace std;

vector<int>adj[1000001];
vector<int>rev[1000001];
int vis[1000001],n;
int val[1000001];
stack<int>stk;

vector<vector<int>>ssc;
vector<int>v;
int ans=0;
void dfs1(int node)
{
    vis[node]=1;
    for(int child:adj[node])
        if(!vis[child])
        dfs1(child);

    stk.push(node);
}

void reverse()
{
    for(int i=0;i<n;i++)
    {
        for(int child:adj[i])
        {
            rev[child].push_back(i);
        }
    }
}

void dfs2(int node)
{
    v.push_back(node);
    vis[node]=1;
    for(int child:rev[node])
    {
        if(!vis[child])
            dfs2(child);
    }
}
void find_SSC()
{

    for(int i=0;i<n;i++)
        if(!vis[i])
        dfs1(i);

    reverse();
    memset(vis,0,sizeof(vis));
   // cout<<"Strongly Connected components are\n";
    while(!stk.empty())
    {
        int cur=stk.top();
        stk.pop();
        if(vis[cur]==0)
        {
            dfs2(cur);
            ssc.push_back(v);
            v.clear();
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--){
    int a,b;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        adj[i].clear();
        rev[i].clear();
        vis[i]=0;
        cin>>val[i];
    }

    ssc.clear();
    int ans=0;
    for(int i=0;i<n;i++)
    {
        a=i;
        b=(i+val[i]+1)%n;
        if(a==b)ans++;
        adj[a].push_back(b);

    }

    find_SSC();
    for(vector<int> x:ssc)
    {
      if(x.size()>1)ans+=x.size();
    }
    cout<<ans<<"\n";
    }

}

