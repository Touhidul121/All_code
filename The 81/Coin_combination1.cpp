#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long ll;

int main()
{

    ll m,n;
    cin>>m>>n;
    ll coin[m];
    for(int i=0;i<m;i++)
    cin>>coin[i];
    ll way[n+1];
    memset(way,0,sizeof(way));
    way[0]=1;


    for(ll i=1;i<=n;i++)
    {
        for(ll j=0;j<m;j++)
        {
           if(i>=coin[j])
            way[i]=(way[i]+way[i-coin[j]])%mod;
        }
    }
    cout<<way[n]<<"\n";
}


