#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int n,k,a;cin>>n>>k;
    vector<int>v;
    for(int i=0;i<n;i++)cin>>a , v.push_back(a);

    if(n==1 || n==k)
        cout<<0<<"\n";
    else
    {
        vector<int>pref(n-1);

        for(int i=0;i<n-1;i++)
            pref[i]=v[i]-v[i+1];

        sort(pref.begin(),pref.end());

        int sum=v[n-1]-v[0];

        for(int i=0;i<k-1;i++)
            sum+=pref[i];

        cout<<sum<<"\n";
    }
}
