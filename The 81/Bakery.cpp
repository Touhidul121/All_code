#include<bits/stdc++.h>
using namespace std;
#define INF INT_MAX
#define sz 100007

vector<pair<int,int>>cost[sz];
unordered_set<int>st1,st;
int dist=INF;
void bfs(int src)
{


  for(auto x:cost[src])
  {

     if(st1.find(x.first)==st1.end())
        dist=min(dist,x.second);

  }


}

int main()
{
    int n,m,k,u,v,l;
    cin>>n>>m>>k;
    unordered_set<int>st;
    map<pair<int,int>,int>mp;
    for(int i=0;i<m;i++)
    {
        cin>>u>>v>>l;
         st.insert(u);
         st.insert(v);


                cost[u].push_back({v,l});
                cost[v].push_back({u,l});



    }

    if(k==0)
    cout<<-1<<"\n";
    else{
    int city[k],res=INF;
    for(int i=0;i<k;i++)
    {
        cin>>city[i];
        st1.insert(city[i]);
    }
    for(int i=0;i<k;i++){

        if(st.find(city[i])!=st.end()){
        bfs(city[i]);
        res=min(dist,res);
        }
    }


    if(res==INF)
            cout<<-1<<"\n";
    else
        cout<<res<<"\n";
    }

}
