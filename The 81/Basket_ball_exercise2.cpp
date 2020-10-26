#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n,b;
    cin>>n;
    ll a[2][n];
    for(int i=0;i<n;i++)
    {
     cin>>a[0][i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>a[1][i];
    }
    ll dp[2][n];
    ll i=0,j=0;
    dp[0][0]=a[0][0];
    dp[1][0]=a[1][0];
    for(j=1;j<n;j++)
    {
        dp[0][j]=max(dp[0][j-1],a[0][j]+dp[1][j-1]);
        dp[1][j]=max(dp[1][j-1],a[1][j]+dp[0][j-1]);
    }
    cout<<max(dp[0][n-1],dp[1][n-1])<<"\n";
}
