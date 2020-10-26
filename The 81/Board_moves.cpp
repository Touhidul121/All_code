#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,ans=0;
        cin>>n;
        for(ll i=1;i<=n/2;i++)
        {
            ans+=(8*i)*i;
        }
        cout<<ans<<"\n";
    }
}
