#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    string s,t;
    cin>>s>>t;
    int cnt=0;
    vector<pair<int,int>>v;
    for(int i=0;i<=m-n;i++)
    {
       string x=t.substr(i,n);

       for(int j=0;j<n;j++)
       {
           if(s[j]==x[j])
            cnt++;
       }
       v.push_back(make_pair(cnt,i));
       cnt=0;
    }
    sort(v.rbegin(),v.rend());

    int ind=v[0].second;
   // cout<<ind<<" ";
    cout<<n-v[0].first<<"\n";

    for(int i=0;i<n;i++)
    {
        if(t[ind]!=s[i])
        {
            cout<<i+1<<" ";
        }
        ind++;
    }
    cout<<"\n";
}
