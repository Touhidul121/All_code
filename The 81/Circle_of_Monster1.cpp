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
        ll n,x;
        cin>>n;
        vector<ll>ai,bi;
        for(int i=0;i<n;i++)
        {
            cin>>x;ai.push_back(x);
            cin>>x;bi.push_back(x);
        }
        ll mn=LLONG_MAX;
        long long ans=0;
        for(int i=0;i<n;i++)
        {
            int ni=(i+1)%n;
            ll val=min(ai[ni],bi[i]);
            ans+=ai[ni]-val;
            mn=min(val,mn);
        }
        cout<<ans+mn<<"\n";
    }
}
