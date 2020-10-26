#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n,a;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++)cin>>a , v.push_back(a);

        int pref_end=-1,suff_end=n;

        for(int i=0;i<n;i++)
        {
            if(v[i]<i)break;
            pref_end=i;
        }

        for(int i=n-1;i>=0;i--)
        {
            if(v[i]<n-1-i)break;
            suff_end=i;
        }
        if(suff_end<=pref_end)cout<<"Yes"<<"\n";
        else cout<<"No"<<"\n";

    }
}
