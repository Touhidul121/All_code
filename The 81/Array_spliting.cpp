#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,k;
    cin>>n>>k;

    vector<int>v;

    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    if(n==1)
        cout<<v[n-1]-v[0]<<"\n";
        else if(n==k)
            cout<<0<<"\n";
    else
    {
        vector<int>pref(n);

        for(int i=0;i<n-1;i++)
        {
            pref[i]=v[i]-v[i+1];

        }
        sort(pref.begin(),pref.end());

        long long sum=v[n-1]-v[0];
        for(int i=0;i<n;i++)
            cout<<pref[i]<<" ";
        for(int i=0;i<k-1;i++)
        {
          sum +=pref[i];
        }
        cout<<sum<<"\n";
    }
}
