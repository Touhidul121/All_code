#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,x=1,y,res;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++)
      cin>>a[i];
      if(n>m)
            cout<<0<<endl;
      else
      {
          sort(a,a+n);
          for(int i=0;i<n-1;i++)
          {
              for(int j=i+1;j<n;j++)
              {
                  y=a[j]-a[i];
                  res=((x%m)*(y%m))%m;
                  x=res;
              }

          }
          cout<<res<<endl;
      }
}
