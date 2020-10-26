#include<bits/stdc++.h>
using namespace std;
#define maxN 200001
int parent[maxN];
int find(int child)
{
    if(parent[child]<0)
        return child;
    return parent[child]=find(parent[child]);
}

void union1(int a,int b)
{
    parent[a]+=parent[b];
    parent[b]=a;
}
int main()
{

   int t;
   cin>>t;
   while(t--)
    {
    int n,a,b,k;
    cin>>n;
    memset(parent,-1,sizeof(parent));
    k=n;
    for(int i=1;i<=k;i++){
            cin>>b;
            a=i;
            a=find(a);
            b=find(b);
            if(a!=b)
                union1(a,b);
    }


    for(int i=1;i<=n;i++)
    {
            if(parent[i]<0)
            cout<<abs(parent[i])<<" ";
            else
                cout<<abs(parent[parent[i]])<<" ";
    }
    cout<<"\n";

   }
}

