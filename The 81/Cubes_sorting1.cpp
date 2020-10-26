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
        vector<int>v,v1;
        for(int i=0;i<n;i++)cin>>a , v.push_back(a);
        int cnt=1;
        for(int i=0;i<n-1;i++)
        {
            if(v[i]>v[i+1])cnt++;
        }
        if(cnt==n)cout<<"NO"<<"\n";
        else cout<<"YES"<<"\n";
    }
}
