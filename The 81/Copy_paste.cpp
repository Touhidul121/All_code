#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);cout.tie(NULL);

 int t;
 cin>>t;
 while(t--)
 {
     ll n,k,a;
     cin>>n>>k;
     vector<ll>v;
     for(int i=0;i<n;i++)cin>>a , v.push_back(a);

     ll ans=0;
     sort(v.begin(),v.end());
     ll x=v[0];
     for(int i=1;i<n;i++)
     {

         ans+=(k-v[i])/x;
     }
     cout<<ans<<"\n";
 }
}
