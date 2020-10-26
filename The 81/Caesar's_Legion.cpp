#include<bits/stdc++.h>
#define mod 100000000
using namespace std;
typedef long long ll;
ll dp[101][101][11][11];
ll lim_h,lim_f;
ll getans(ll f,ll h,ll k1,ll k2)
{
    if(f+h==0)return 1;

    if(dp[f][h][k1][k2]!=-1)
        return dp[f][h][k1][k2];

    ll x=0;
    if(f>0 && k1>0)
        x=getans(f-1,h,k1-1,lim_h);
    ll y=0;
    if(h>0 && k2>0)
        y=getans(f,h-1,lim_f,k2-1);
    return dp[f][h][k1][k2]=(x+y)%mod;


}

int main()
{
    ll n1,n2;
    cin>>n1>>n2>>lim_f>>lim_h;

    for(int i=0;i<=n1;i++)
    {
        for(int j=0;j<=n2;j++)
        {
            for(int k=0;k<=lim_f;k++)
            {
                for(int l=0;l<=lim_h;l++)
                {
                    dp[i][j][k][l]=-1;
                }
            }
        }
    }
    ll r=getans(n1,n2,lim_f,lim_h);
    cout<<r<<"\n";
}
