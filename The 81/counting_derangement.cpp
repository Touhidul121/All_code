#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;

typedef long long ll;
#define maxN 1000001
ll dp[maxN];
ll derangement(int n)
{
    if(n==1)return 0;
    if(n==2)return 1;
    if(dp[n]!=-1)return dp[n];

    return dp[n]=((n-1)%mod*(derangement(n-1)%mod+derangement(n-2)%mod)%mod)%mod;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
int n;
cin>>n;
memset(dp,-1,sizeof(dp));
cout<<derangement(n)<<"\n";
}

