#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll power(ll a,ll n)
{
    ll res=1;
    while(n)
    {
        if(n&1)
            res=res*a, n--;
        n=n/2;
        a=a*a;
    }
    return res;
}

ll highest_power(ll n,ll k)
{
    ll i=0;
    ll a=power(n,i);

    while(a<=k)
    {
        i++;
        a=power(n,i);

    }
    return i-1;
}

ll vis[61];
map<ll,ll>mp;

ll getans(ll n,ll k)
{
  for(int i=0; i<=60; i++)
        vis[i]=0;

    while(k)
    {
     ll t=highest_power(n,k);
     if(vis[t])
        {
            return -1;
        }
        else
        {
            vis[t]=1;
        }
        k-=power(n,t);
    }

    for(ll i=0; i<=60; i++)
    {
        if(vis[i])
            mp[i]++;
    }
    return 1;

}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,a;
        cin>>n>>k;
        vector<ll>v;

        for(ll i=0; i<n; i++)
            cin>>a, v.push_back(a);

        bool f=false;
        for(int i=0; i<n; i++)
        {
            if(v[i]==0)
                continue;
            if(getans(k,v[i])==-1)
            {
                f=true;
                break;
            }

        }

        for(auto x:mp)
        {
            if(x.second>1)
            {

                f=true;
                break;
            }
        }

        if(f)
            cout<<"NO"<<"\n";
        else
            cout<<"YES"<<"\n";
            mp.clear();

    }

}
