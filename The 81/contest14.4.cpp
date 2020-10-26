#include<bits/stdc++.h>
#define mxn 100005
#define pii pair<int,int>
using namespace std;

vector<int> adj[mxn];
map<pii,int>mp;
bool vis[mxn];

vector<pii> v;

int ptr=3;

void dfs(int s)
{
    vis[s]=true;

    for(auto vv:adj[s])
    {
        if(vis[vv])
            continue;
        vis[vv]=true;

        if(mp[{s,vv}]==0)
            {
                mp[{s,vv}]=ptr;
                mp[{vv,s}]=ptr;
                ptr++;
            }
            dfs(vv);
    }
}
