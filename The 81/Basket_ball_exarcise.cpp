#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n,b;
    cin>>n;
    ll a[2][n];
    for(ll i=0;i<2;i++)
    {
        for(ll j=0;j<n;j++)
            cin>>a[i][j];
    }
    ll dp[2][n];
    ll i=0,j=0;
    dp[0][0]=a[0][0];
    dp[1][0]=a[1][0];
    for(j=1;j<n;j++)
    {
        dp[i][j]=max(dp[i][j-1],a[i][j]+dp[i+1][j-1]);
        dp[i+1][j]=max(dp[i+1][j-1],a[i+1][j]+dp[i][j-1]);
    }
    cout<<max(dp[0][n-1],dp[1][n-1])<<"\n";
}
