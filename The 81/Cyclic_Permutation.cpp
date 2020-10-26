#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;

typedef long long ll;
ll F[1000001];
ll power(ll a,ll n)
{
    ll res=1;
    while(n)
    {
     if(n&1)
            res=(res*a)%mod, n--;
     n=n/2;
     a=(a*a)%mod;
    }
    return res;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n;
    cin>>n;
    F[0]=F[1]=(ll)1;
    for(ll i=2;i<=1000000;i++)
    {
        F[i]=(F[i-1]*i)%mod;
    }
    ll ans=(F[n]-power(2,n-1))%mod;
    if(ans<0)
        ans+=mod;
    cout<<ans<<"\n";
}
