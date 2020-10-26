#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
  ll t;
  cin>>t;
  while(t--)
  {
      ll n,a,k;
      cin>>n>>k;
      vector<ll>v,v1;

      for(ll i=0;i<n;i++)
      {
          cin>>a;
          v.push_back(a);
      }

      ll i=0,j=n-1;

      while(i<j)
      {
          v1.push_back(v[i]+v[j]);
          i++;
          j--;
      }
      ll count=1,m=1;;
      sort(v1.begin(),v1.end());
      for(ll i=0;i<v1.size()-1;i++)
      {
          if(v1[i]==v1[i+1])
            count++;
          if(m<=count)
          m=count;
          if(v1[i]!=v1[i+1])
            count=1;
      }

      cout<<n-(m*2)<<endl;
  }
}
