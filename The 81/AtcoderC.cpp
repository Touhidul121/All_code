#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int count_div(int n)
{
  int cnt=0;
  map<int,int>mp;
  for(int i=2;i*i<=n;i++)
  {
      if(n%i==0)
      {
          while(n%i==0)
          {
              cnt++;
              n=n/i;
          }
          mp[i]=cnt;
          cnt=0;
      }
  }
  if(n>1)
    mp[n]++;
  int ans=1;

  for(auto x:mp)
  {
      ans*=(x.second+1);
  }
   return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    ll n;
    cin>>n;

    ll ans=0;
    for(ll i=1;i<n;i++)
    {
        ans+=count_div(n-i);
    }
    cout<<ans<<"\n";
}
