#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
    int n,a;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    int min_p=v[n-1],cnt=0;
    for(int i=n-2;i>=0;i--)
    {
        if(v[i]>min_p)
        {
            cnt++;
        }
        else
            min_p=v[i];
    }
    cout<<cnt<<"\n";
    }
}
