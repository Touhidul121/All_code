#include<bits/stdc++.h>
using namespace std;
#define INF (int)1e6

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n,a,k;
        cin>>n>>k;
        vector<int>wt,val;

        for(int i=0;i<k;i++)
        {
            cin>>a;
            if(a!=-1)
            {
                val.push_back(a);
                wt.push_back(i+1);

            }
        }
        n=wt.size();
        int w=k;

        int dp[n+1][w+1];

        for(int i=0;i<=w;i++)
            dp[0][i]=INF;

        for(int i=0;i<=n;i++)
            dp[i][0]=0;

        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=w;j++)
            {
                if(wt[i-1]>j)
                    dp[i][j]=dp[i-1][j];
                else
                {
                    dp[i][j]=min(dp[i-1][j],dp[i][j-wt[i-1]]+val[i-1]);
                }
            }
        }

        if(dp[n][w]==INF)cout<<-1<<"\n";
        else cout<<dp[n][w]<<"\n";

    }
}
