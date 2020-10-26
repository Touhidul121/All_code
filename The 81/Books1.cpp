#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,t,a;
    cin>>n>>t;
    vector<int>v;
    vector<int>pref(n);

    for(int i=0;i<n;i++)
    {
       cin>>a;
       v.push_back(a);
       if(i==0)
        pref[i]=a;
       else
        pref[i]=pref[i-1]+a;
    }

    int ans=0,x=t;
    for(int i=0;i<n;i++)
    {
        x-=v[i];
        int ind=upper_bound(pref.begin(),pref.end(),pref[i]+x)-pref.begin();
        ans=max(ans,ind-i);
        x=t;
    }
    cout<<ans<<"\n";

}
