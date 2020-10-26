#include<bits/stdc++.h>
using namespace std;

map<pair<int,pair<int,int>>,int>mp;;
set<int>st1;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,a;
    cin>>n;
    vector<int>v;

    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
        st1.insert(a);
    }
    int k=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {

            if(st1.find(v[i]+v[j])!=st1.end())
            {

                mp[{v[i],{v[j],v[i]+v[j]}}]++;

            }
        }
    }
    cout<<mp.size()<<"\n";

    for(auto x:mp)
    {
        cout<<x.first.first<<" "<<x.first.second.first<<" "<<x.first.second.second<<"\n";
    }
}
