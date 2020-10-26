#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    map<char,ll>mp;
    vector<ll>v;
    for(ll i=0;i<n;i++)
    {
        mp[s[i]]++;
    }

    for(auto x:mp)
    {
        v.push_back(x.second);
    }

    sort(v.rbegin(),v.rend());
//    for(int i=0;i<v.size();i++)
//        cout<<v[i]<<" ";
    ll j=0,ans=0;
    while(k>0)
    {
       if(k>v[j]) {
        k=k-v[j];
        ans=ans+v[j]*v[j];
       }
       else if(v[j]>=k)
       {
           ans=ans+k*k;
           k=0;
       }
        j++;
    //cout<<v[j]<<" ";
    }
    cout<<ans<<endl;
}
