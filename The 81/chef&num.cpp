#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a;
        cin>>n;
        vector<int>v;
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
            mp[a]++;
        }
        int m=0;
        int num=0;
        for(auto x:mp)
        {
            if(m<x.seond)
            {
                m=x.second;
                num=x.first;
            }
        }
        int count=1;
        for(int i=0;i<v.size()-1;i++)
        {
            if(a[i]==num){
            for(int j=i+1;j<v.size();j++)
            {
            if(j-i>1)
                    count++;
            }
            }
        }
    }
}
