#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll bigmod(ll a,ll n,ll m)
{
  if(n==0)
        return 1;
  if(n%2==0)
  {
      ll ret=bigmod(a,n/2,m);
      return ((ret%m)*(ret%m))%m;
  }
  else
  {
      return ((a%m)*(bigmod(a,n-1,m)%m)%m);
  }
}

int main()
{
    ll a,n,m;
    cin>>a>>n>>m; // here a is the base, n is power and m divider to get mod

    cout<<bigmod(a,n,m)<<"\n";
}
