#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n,k;
    cin>>n>>k;

    string s;
    cin>>s;

    vector<ll>v(33);
    for(int i=0;i<n;i++)
    {
        v[s[i]-'A']++;
    }

    sort(v.rbegin(),v.rend());

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

    }
    cout<<ans<<endl;

}
