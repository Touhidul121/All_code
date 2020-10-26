#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll n,k;
    cin>>n>>k;
    vector<ll>v(n);

    for(int i=0;i<n;i++)
        cin>>v[i];

    ll L=*max_element(v.begin(),v.end()), R=1e18,ans=R;

    while(L<=R)
    {
        ll mid=(L+R)/2ll;
        ll c=0,s=0;

        for(int i=0;i<n;i++)
        {
            if(s+v[i]>mid)
                c++, s=0;
            s+=v[i];
        }
        c++;
        if(c>k)
            L=mid+1;
        else
            ans=mid,R=mid-1;
    }
    cout<<ans<<"\n";
}
