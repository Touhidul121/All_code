#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a;
    cin>>n;
    vector<int>v,v1,v2;

    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());

    for(int i=0;i<n;i+=2){
        v1.push_back(v[i]);
        v[i]=-1;
    }

    for(int j=n-1;j>=0;j--)
    {
        if(v[j]!=-1)
        v2.push_back(v[j]);
    }
    for(int i=0;i<v1.size();i++)
        cout<<v1[i]<<" ";
    for(int i=0;i<v2.size();i++)
        cout<<v2[i]<<" ";

}
