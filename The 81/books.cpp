#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t,a;
    cin>>n>>t;
    vector<int>v,v1(n+5);

    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());

    for(int i=0;i<n;i++)
        v1[i+1]=v1[i]+v[i];
//for(int i=1;i<n+1;i++)
//    cout<<v1[i]<<" ";
        int count=0;

    for(int i=1;i<n+1;i++)
    {
        if(t>=v1[i])
        {
            count++;
        }
    }
    cout<<count<<endl;
}
