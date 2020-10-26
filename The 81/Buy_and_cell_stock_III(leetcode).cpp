#include<bits/stdc++.h>
using namespace std;
#define maxN 1001
int dp[maxN][3][2];
int n;
vector<int>val;

int solve(int pos,int t,bool bought)
{
    if(pos>=n || t==0)return 0;
    if(dp[pos][t][bought]!=-1)return dp[pos][t][bought];

    int result=0,result1;
    result=solve(pos+1,t,bought);
    if(bought==true)
    {
        result1=(solve(pos+1,t-1,false)+val[pos]);
    }
    else
    result1=(solve(pos+1,t,true)-val[pos]);

    return dp[pos][t][bought]=max(result,result1);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int a;
    cin>>n;

    for(int i=0;i<n;i++)cin>>a ,val.push_back(a);

    memset(dp,-1,sizeof(dp));

    cout<<solve(0,2,false)<<"\n";
}
