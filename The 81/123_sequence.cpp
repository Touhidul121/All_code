#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a;
    cin>>n;
    vector<int>v;
    map<int,int>mp;
    int mx=0;
    long long sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        mp[a]++;
        mx=max(mx,mp[a]);
    }
    bool f=false;
    for(auto x:mp)
    {
        if(x.second==mx && !f)

        {
            f=true;continue;
        }
        sum+=x.second;
    }
    cout<<sum<<"\n";
}
