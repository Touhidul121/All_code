#include<bits/stdc++.h>
using namespace std;
#define maxN 100001
int arr[maxN];
map<pair<int,pair<int,int>>,int>dp;
int n,k,z;
int solve(int pos,int k,int z)
{   if(pos>n || pos<1)return 0;
    if(dp.find({pos,{k,z}})!=dp.end())return dp[{pos,{k,z}}];
    int x=0,y=0;
    if(pos<n && k)
    x=arr[pos+1]+solve(pos+1,k-1,z);

    if(pos>1 && k && z){

        y=arr[pos-1]+solve(pos-1,k-1,z-1);
    }
    return dp[{pos,{k,z}}]=max(x,y);

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
    cin>>n>>k>>z;
    for(int i=1;i<=n;i++)cin>>arr[i];

    cout<<arr[1]+solve(1,k,z)<<"\n";
    dp.clear();
    }

}
