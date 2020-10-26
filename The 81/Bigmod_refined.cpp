#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll power(ll a,ll n,ll mod)
{
    ll res=1;
    while(n>0)
    {
        if(n&1)
        {
            res=(res*a)%mod, n--;
        }
        n=n/2;
        a=(a*a)%mod;
    }
    return res;
}

int main()
{
    ll a,n;
    cin>>a>>n;
    ll mod=1000000007;
    cout<<power(a,n,mod)<<"\n";
}
