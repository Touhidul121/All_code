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
    ll n,x,pos;
    cin>>n>>x>>pos;
//    ll left=pos;
//    ll right=n-(pos+1);
//    ll big=n-x;
//
//
//    ll c1=(F[max(big,left)]*invF[max(big,left)-min(big,left)])%mod;
//
//    cout<<big<<" "<<left<<"\n";
//    if(max(big,left)==big)big-=left;
    ll c2=(F[24]*invF[81])%mod;;

    cout<<c2%mod<<"\n";
}
