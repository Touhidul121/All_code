#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
ll F[1000001];

ll power(ll a,ll n)
{
    ll res=1;
    while(n)
    {
        if(n&1)
            res=((res%mod)*(a%mod))%mod;
        n=n/2;
        a=((a%mod)*(a%mod))%mod;
    }
    return res;
}
ll C(ll n,ll k)
{
    if(k>n)return 0;
    ll res=F[n];

    res=(res*power(F[k],mod-2))%mod;
    res=(res*power(F[n-k],mod-2))%mod;
    return res;
}
int main()
{
  F[0]=F[1]=1;
  for(ll i=2;i<=1000000;i++)
        F[i]=(F[i-1]*i)%mod;



  ll n,k;
  cin>>n;
  ll ans=C(n/2,3);
  cout<<ans<<"\n";

  cout<<(ans+C(n/2+1,3))%mod<<"\n";

}
