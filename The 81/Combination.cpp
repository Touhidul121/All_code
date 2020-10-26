#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007

typedef long long ll;
ll power(ll a,ll n,ll m)
{
    if(n==0)
        return 1;
    else if(n%2==0)
    {
        ll ret=power(a,n/2,m);
        return ((ret%m)*(ret%m))%m;
    }
    else
        return ((a%m)*(power(a,n-1,m)%m))%m;
}
ll nCr(ll n,ll k)
{
    if(k>n-k)
        k=n-k;
    ll ans=1;

    for(ll i=1;i<=k;i++)
    {
        ans=(ans*(n-i+1))%mod;
        ans=(ans*power(i,mod-2,mod))%mod;
    }
    return ans;
}
int main()
{
    ll n,k;
    cin>>n>>k;
    ll res=nCr(n,k);
    cout<<res<<"\n";
    cout<<(res*n)%mod<<"\n";

}
