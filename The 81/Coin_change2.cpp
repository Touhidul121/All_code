 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
     vector<int>coins;int amount;
     int n,a;
     cin>>n>>amount;
     for(int i=0;i<n;i++)
        cin>>a ,coins.push_back(a);

        int inf=999999999;
        int dp[amount+1],ans=inf;
        dp[0]=0;
        for(int i=1;i<=amount;i++)
        {
            ans=inf;
            for(int j=0;j<coins.size();j++)
            {
                if(i-coins[j]>=0)
                ans=min(ans,dp[i-coins[j]]);
            }
            if(ans!=inf)
            {
                ans+=1;
            }
            dp[i]=ans;

        }
        if(dp[amount]==inf)
            cout<<-1<<"\n";
        else
            cout<<dp[amount]<<"\n";
    }

