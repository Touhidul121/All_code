#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++)cin>>arr[i], sum+=arr[i];
    int diff;
    cin>>diff;
    int m;
    m=(diff+sum)/2;

    int dp[n+1][sum+1];
    for(int i=0;i<=n;i++)
        dp[i][0]=1;
    for(int i=1;i<=m;i++)
        dp[0][i]=0;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {

          if(arr[i-1]>j)
                dp[i][j]=dp[i-1][j];
          else
          {
              dp[i][j]=dp[i-1][j]+dp[i-1][j-arr[i-1]];
          }
        }
    }
    cout<<dp[n][m]<<"\n";
}

