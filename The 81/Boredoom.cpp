#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
ll ar[1000001],dp[100001];
map<ll,ll>mp;

ll getans(ll pos)
{
    if(pos<0)return 0;
    if(dp[pos]!=-1)
        return dp[pos];
    ll x=0;

     if(pos-1>=1&&ar[pos-1]-ar[pos]==-1)
    x=getans(pos-2)+ar[pos]*mp[ar[pos]];
    else
        x=getans(pos-1)+ar[pos]*mp[ar[pos]];


    ll y=0;

    if(pos-2>=1&&ar[pos-2]-ar[pos-1]==-1)
        y=getans(pos-3)+ar[pos-1]*mp[ar[pos-1]];
    else if(pos-1>=1)
        y=getans(pos-2)+ar[pos-1]*mp[ar[pos-1]];

    return dp[pos]=max(x,y);
}
int main()
{
    memset(dp,-1,sizeof(dp));
    ll n,a;

    cin>>n;

    set<ll>st;
    for(ll i=1;i<=n;i++)
        cin>>a ,st.insert(a) , mp[a]++;

        ll i=1;
        for(auto x:st)
            ar[i]=x ,i++;


    cout<<getans(st.size())<<"\n";

}
