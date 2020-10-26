#include<bits/stdc++.h>
using namespace std;

vector<int>parent(100,-1);
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
    int n=8,a,b,k;
    parent.resize(n+1);
    cin>>k;
    for(int i=1;i<=k;i++){
            cin>>a>>b;
            a=find(a);
            b=find(b);
            if(a!=b)
                union1(a,b);
    }

    cout<<"Component size "<<"\n";

    for(int i=1;i<=8;i++)
    {
        if(parent[i]<0)
            cout<<abs(parent[i])<<"\n";
    }
}
