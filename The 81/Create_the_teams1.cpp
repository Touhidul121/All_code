#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll n,x,a;
        cin>>n>>x;
        vector<ll>v;
        for(int i=0;i<n;i++)cin>>a , v.push_back(a);

        sort(v.rbegin(),v.rend());

        int cnt=0;

        for(int i=0;i<n;i++)
        {
            ll k=1;
            while(i<n && v[i]*k<x)
            {
                i++;
                k++;
            }
            if(i<n && v[i]*k>=x)cnt++;
        }
        cout<<cnt<<"\n";
    }

}
