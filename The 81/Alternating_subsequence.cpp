#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--)
    {
        ll p=0,m=0;
        ll n,res=0;
        cin>>n;
        ll a[n];
        vector<ll>v;
        for(ll i=0;i<n;i++)
        {
           cin>>a[i];
           if(a[i]>0)
            p++;
           else m++;
           v.push_back(a[i]);

        }

        ll max_p,max_m,max_pind,max_mind;

        sort(v.begin(),v.end());
        if(p==n||m==n)
        {
            cout<<*v.rbegin()<<endl;
        }
        else{

    for(ll i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            ll ans=0;
            ans=max(a[i],ans);
            i++;

            while(a[i]>0&&i<=n-1)
            {
                ans=max(ans,a[i]);
                i++;
            }
            res+=ans;
            i--;
        }
        if(a[i]<0)
        {
            ll ans1=-9999999999;
            ans1=max(ans1,a[i]);
            i++;
            while(a[i]<0&&i<=n-1)
            {
                ans1=max(ans1,a[i]);
                i++;
            }
            res+=ans1;
            i--;
        }
    }
    cout<<res<<endl;
    }
}

}
