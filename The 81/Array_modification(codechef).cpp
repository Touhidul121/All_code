#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k,a;
        cin>>n>>k;
        vector<ll>v;
        for(ll i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
        }
        ll x=k%3;
        for(ll i=0;i<x-1;i++)
        {
            for(int j=0;j<n;j++)
            v[j]=v[j%n]^v[n-(j%n)-1];
        }
        for(ll x:v)
            cout<<x<<" ";
        cout<<"\n";
    }
}
