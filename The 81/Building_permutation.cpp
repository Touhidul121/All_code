#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n,a,sum=0;
    cin>>n;

    vector<ll>v;

    for(ll i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }

    sort(v.begin(),v.end());

    for(ll i=0;i<n;i++)
    {
        sum+=abs(v[i]-(i+1));
    }
    cout<<sum<<endl;
}
