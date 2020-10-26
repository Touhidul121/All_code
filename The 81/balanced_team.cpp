#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll n,a;
    cin>>n;
    vector<ll>v;

    for(ll i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }

    sort(v.begin(),v.end());
    ll j=0,ans=0,i=0;
    for(ll i=0;i<n;i++)
    {
        int x=upper_bound(v.begin(),v.end(),v[i]+5)-v.begin();

        ans=max(ans,x-i);


    }
    cout<<ans<<endl;
}
