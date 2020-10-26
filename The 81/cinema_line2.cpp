#include<bits/stdc++.h>


using namespace std;

int main()
{
  int n,a;
  cin>>n;
  vector<int>v;
  for(int i=0;i<n;i++)
  {
      cin>>a;
      v.push_back(a);
  }

  int cnt25=0,cnt50=0;

  for(int i=0;i<n;i++)
  {
      if(v[i]==25)
        cnt25++;
      if(v[i]==50)
      {
          cnt50++;
          if(cnt25>0)
            cnt25--;
          else
          {
              cout<<"NO"<<"\n";
              return 0;
          }
      }
      if(v[i]==100)
      {

          if(cnt50>0&&cnt25>0)
          {
              cnt50--;
              cnt25--;
          }
          else if(cnt25>2)
          {
              cnt25-=3;
          }
          else
          {
              cout<<"NO"<<"\n";
              return 0;
          }
      }
  }
  cout<<"YES"<<"\n";
}
