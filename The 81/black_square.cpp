#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,sum=0;
    vector<int> v;
    map<char,int>mp;
    for(int i=0;i<4;i++)
    {
       cin>>a;
       v.push_back(a);
    }
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
       mp[s[i]]++;
    }
    for(auto x:mp)
    {
        a=x.first-'0';
        sum+=v[a-1]*x.second;
    }
    cout<<sum<<endl;
}
