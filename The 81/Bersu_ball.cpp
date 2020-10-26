#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n,m,a;
   cin>>n;

   vector<int>v1,v2;

   for(int i=0;i<n;i++)
   {
       cin>>a;
       v1.push_back(a);
   }

   cin>>m;
   for(int i=0;i<m;i++)
   {
       cin>>a;
       v2.push_back(a);
   }

   sort(v1.begin(),v1.end());
   sort(v2.begin(),v2.end());

   int x=min(n,m);
   int count=0;

   for(int i=0;i<v1.size();i++)
   {
      for(int j=0;j<v2.size();j++)
      {
          if(abs(v1[i]-v2[j])<=1)
          {
              v2[j]=9999;
              v1[i]=-9999;
              count++;
              break;
          }
      }
   }
   cout<<count<<"\n";

}
