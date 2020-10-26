#include<bits/stdc++.h>
using namespace std;
const int maxN = 2e5;
int price[maxN+1];
int dp[maxN+1];

int cutrod(int n)
{
 if(n<=0)return 0;

 if(dp[n]!=-1)return dp[n];
 int mx=INT_MIN;
 for(int i=1;i<=n;i++)
 {
     mx=max(mx,price[i]+cutrod(n-i));
 }
 return dp[n]=mx;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin>>n;


    for(int i=1;i<=n;i++)
        cin>>price[i];

    memset(dp,-1,sizeof(dp));
    cout<<cutrod(n)<<"\n";
}
