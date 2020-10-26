#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
  int n,a;
  cin>>n;
  vector<int>v;
  ll ans=0;
  for(int i=0;i<n;i++)
  {
      cin>>a;
      v.push_back(a);
      ans+=a;
  }
  sort(v.begin(),v.end());
  if(n==1)
    cout<<ans<<"\n";

    else
    {
        ll sum=ans;
        for(int i=0;i<n-2;i++)
        {
            ans+=sum;
            sum-=v[i];
        }
        ans+=v[n-1]+v[n-2];
        cout<<ans<<"\n";
    }
}
