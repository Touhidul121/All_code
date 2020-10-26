#include<bits/stdc++.h>
using namespace std;
#define mod 100000000
typedef long long ll;
ll dp[101][101][11][11];

ll limit_f,limit_h;

ll solve(ll f,ll h,ll k1,ll k2)
{
    if(f==0 && h==0)return 1;

    if(dp[f][h][k1][k2]!=-1)return dp[f][h][k1][k2];

    ll x=0;
    if(f>0 && k1>0)
        x=solve(f-1,h,k1-1,limit_h);

    ll y=0;
    if(h>0 && k2>0)
        y=solve(f,h-1,limit_f,k2-1);

    return dp[f][h][k1][k2]=(x+y)%mod;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    ll n1,n2;
    cin>>n1>>n2>>limit_f>>limit_h;

    memset(dp,-1,sizeof(dp));

    cout<<solve(n1,n2,limit_f,limit_h)<<"\n";
}
