#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void bin_tree(ll l,ll h,ll k,ll n)
{
    ll mid=l+((h-l)/(ll)2);
    if(k<mid)
        bin_tree(l,mid-1,k,n-1);
    else if(k>mid)
        bin_tree(mid+1,h,k,n-1);
    else
        cout<<n<<"\n";
}

int main()
{
  ll n,k;
  cin>>n>>k;
  ll sz=1;
  for(ll i=1;i<n;i++)
        sz=(ll)sz*2+1;
  bin_tree(1,sz,k,n);
}
