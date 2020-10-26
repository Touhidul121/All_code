#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
    int n,a;
    cin>>n;
    vector<int>v,v1(n);

    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
        v1[a-1]=i;
    }
    string s;
    int low=n,high=0;
    for(int i=0;i<n;i++)
    {
    low=min(v1[i],low);
    high=max(v1[i],high);
    if(high-low==i)
        s+='1';
    else
        s+='0';
    }
    cout<<s<<"\n";
    }
}
