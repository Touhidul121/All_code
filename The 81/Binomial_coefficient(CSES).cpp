#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
const int maxN = 1e6;
ll F[maxN+1],invF[maxN+1];

ll power(ll a,ll n)
{
    ll res=1;
    while(n)
    {
        if(n&1)
        {
            res=(res*a)%mod , n--;
        }
        n=n/2;
        a=(a*a)%mod;
    }
    return res;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    F[0]=invF[0]=1ll;
    for(ll i=1;i<=maxN;i++)
    {
        F[i]=(F[i-1]*i)%mod;
        invF[i]=(invF[i-1]*power(i,mod-2))%mod;
    }
    ll n;
    cin>>n;
    while(n--)
    {
        ll a,b,res=1;
        cin>>a>>b;

        res=(res*F[a])%mod;
        res=(res*invF[b])%mod;
        res=(res*invF[a-b])%mod;
        cout<<res<<"\n";
    }
}
