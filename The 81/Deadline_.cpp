#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
      int n,d;
      cin>>n>>d;
      bool flag=false;
      if(d<=n)
        cout<<"YES"<<"\n";
      else{
      for(int i=1;i<=n;i++)
      {
          if((i+(int)ceil(d/((i+1)*1.0))<=n))
          {
              flag=true;
              break;
          }
      }
      if(flag)
        cout<<"YES"<<"\n";
      else
        cout<<"NO"<<"\n";
      }
  }
}
