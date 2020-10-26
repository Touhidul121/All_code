#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,x,a;
        cin>>n>>x;
        vector<ll>v;
        for(int i=0;i<n;i++)
            cin>>a , v.push_back(a);

        sort(v.begin(),v.end());
        ll cnt=0;

        for(int i=n-1;i>=0;i--)
        {
            if(v[i]>=x)
                cnt++;
            else
            {
              ll k=1;
              while(v[i]*k<x &&i>=0)
              {
                  i--;
                  k++;
              }
              if(v[i]*k>=x && i>=0)
                cnt++;
            }
        }
        cout<<cnt<<"\n";
    }
}
