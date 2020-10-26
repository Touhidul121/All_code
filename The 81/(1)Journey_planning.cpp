#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
   ll  n,a;
    cin>>n;

    map<ll ,ll >mp;
    vector<ll> v,temp;
    for(ll i=0;i<n;i++)
    {
     cin>>a;
    v.push_back(a);
    }
    for(ll i=0;i<n;i++)
    {
        temp.push_back(v[i]-i);
    }
    for(ll i=0;i<n;i++)
    {
        mp[temp[i]]+=v[i];

    }
   ll mx=-1;
    for(auto x:mp)
    {
        mx=max(mx,x.second);
    }
    cout<<mx<<endl;
}
