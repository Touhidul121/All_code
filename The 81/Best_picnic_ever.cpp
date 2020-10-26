#include<bits/stdc++.h>
using namespace std;

vector<int>adj[1001],res;
int in[1001],vis[1001];
unordered_set<int>st;
void kahn(int n)
{
    queue<int>q;

    for(int i=1;i<=n;i++){
        if(in[i]==0)
        q.push(i);
}
    while(!q.empty())
    {
        int cur=q.front();
        res.push_back(cur);
        q.pop();

        for(int child:adj[cur])
        {

            in[child]--;
            if(in[child]==0)
                q.push(child);

        }
    }

}
int main()
{
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++){
    int n,e,a,b;
    int k;
    cin>>k;

    cin>>n>>e;
    for(int i=1;i<=n;i++)
    {
        adj[i].clear();
        vis[i]=0;
        in[i]=0;
    }
     for(int i=0;i<k;i++)
     {
         cin>>a;
         st.insert(a);
     }
    for(int i=1;i<=e;i++)
    {
        cin>>a>>b;
        adj[a].push_back(b);
        in[b]++;
    }
    kahn(n);
    int i=INT_MAX;
    for( i=res.size()-1;i>=0;i--)
    {
        if(st.find(res[i])!=st.end())
            break;
    }
    cout<<"Case "<<tc<<": ";
    if(i==INT_MAX||res.size()==0)
        cout<<0<<"\n";
    else
    cout<<n-i<<"\n";
    st.clear();
    res.clear();
    }

}


