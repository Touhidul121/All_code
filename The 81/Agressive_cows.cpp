#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
void get_ans(vector<ll>v,ll n,ll c)
{
    long long ans=0,mid;
    long long l=1;
    long long h=1000000000001;
    while(l<=h)
    {
        mid=(l+h)/2;

         ll cnt=1;
    ll pre=v[0];
    for(ll k=1;k<n;k++)
    {
       if(v[k]-pre>=mid)
       {
           cnt++;
          pre=v[k];
       }

    }
    if(cnt<mid)
        h=mid-1;
    else
    {
        ans=max(mid,ans);
        l=mid+1;
    }
    }
    cout<<ans<<"\n";
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,c,a;
        cin>>n>>c;
        vector<ll>v;
        for(ll i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        get_ans(v,n,c);
    }
}
