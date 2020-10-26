#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
   ll n,x,a;
   cin>>n>>x;
   vector<ll>v;
   ll ans=0;
   for(ll i=0;i<n;i++)
   {
       cin>>a;
       v.push_back(a);
   }
   sort(v.begin(),v.end());

   for(ll i=0;i<n;i++)
   {
       ans+=v[i]*x;
       if(x>1)
        x--;
   }
   cout<<(ll)ans<<"\n";
}
