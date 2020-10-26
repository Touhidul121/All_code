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
        vector<int>v;
        for(int i=0;i<n;i++)cin>>a , v.push_back(a);

        int prev=0,mx=0,ind=0;
        for(int i=0;i<n;i++)
        {
            mx=0;
            for(int j=0;j<n;j++)
            {
                if(v[j]!=-1 )
                {
                   int r=__gcd(prev,v[j]);
                   if(mx<r)
                   {
                       ind=j;
                       mx=r;
                   }
                }
            }
            cout<<v[ind]<<" ";
            v[ind]=-1;
            prev=mx;
        }
        cout<<"\n";
    }
}
