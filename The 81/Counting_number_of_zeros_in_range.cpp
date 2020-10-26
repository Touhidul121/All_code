#include<bits/stdc++.h>
using namespace std;
int a[100001];
int st[4*100001];

void buildtree(int si,int ss,int se)
{
    if(ss==se)
    {
        if(a[ss]==0)
            st[si]=1;
        else
            st[si]=0;
        return;
    }
    int mid=(ss+se)/2;
    buildtree(2*si,ss,mid);
    buildtree(2*si+1,mid+1,se);
    st[si]=st[2*si]+st[2*si+1];
}

int query(int si,int ss,int se,int qs,int qe)
{
    if(qs>qe)return 0;
    if(qs==ss && se==qe)return st[si];

    int mid=(ss+se)/2;

    return (query(2*si,ss,mid,qs,min(qe,mid))+(query(2*si+1,mid+1,se,max(mid+1,qs),qe)));


}

int main()
{
  int n,m,l,r;
  cin>>n>>m;
  for(int i=1;i<=n;i++)
        cin>>a[i];
        buildtree(1,1,n);
  for(int i=1;i<=m;i++)
  {
      cin>>l>>r;
      int res=query(1,1,n,l,r);
      cout<<res<<"\n";

  }
}
