#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long ll;

int main()
{

    ll n;
    cin>>n;
    ll way[n+1];
    memset(way,0,sizeof(way));
    way[0]=1;
    ll coin[6]={1,2,3,4,5,6};

    for(ll i=1;i<=n;i++)
    {
        for(ll j=0;j<6;j++)
        {
           if(i>=coin[j])
            way[i]=(way[i]+way[i-coin[j]])%mod;
        }
    }
    cout<<way[n]<<"\n";
}

