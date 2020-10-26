#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll nCr(ll n,ll k)
{
    if(k>n-k)
        k=n-k;
    ll ans=1;
    for(int i=1;i<=k;i++)
    {
        ans*=(n-i+1), ans/=i;
    }
    return ans;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
     ll k,n,a;
     cin>>k>>n;
     vector<int>hash(105);
     for(int i=0;i<n;i++)
     {
      cin>>a;
      hash[a]++;
     }
     ll ans=1;
     for(int i=1;i<=101;i++)
     {
         if(hash[i]>0)
         {
             ans*=nCr(hash[i],min(hash[i],k));
             k-=min(hash[i],k);
             if(k<=0)
                break;
         }
     }
      cout<<ans<<"\n";
    }
}
