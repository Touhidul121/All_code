#include<bits/stdc++.h>
using namespace std;

#define maxN 100001
int par[maxN],rank1[maxN];
int n,m;

int find(int a){
    if(a==par[a])
    return a;
    return par[a]=find(par[a]);
}

void merge(int a,int b)
{
    a=find(a);
    b=find(b);
    if(a!=b){
       par[b]=a;
    }
}

int main()
{
    cin>>n>>m;
    int a,b;
    for(int i=1;i<=n;i++)
    par[i]=i;
    for(int i=1;i<=m;i++)
    {
        cin>>a>>b;
        merge(a,b);
    }

    vector<int>v;
    set<int>st;
    for(int i=1;i<=n;i++)
    {
        st.insert(par[i]);
    }
    for(auto x:st)
        v.push_back(x);
    cout<<v.size()-1<<"\n";
    for(int i=1;i<v.size();i++)
        cout<<v[0]<<" "<<v[i]<<"\n";

}
