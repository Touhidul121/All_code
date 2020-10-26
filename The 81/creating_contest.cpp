#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll n,a;
    cin>>n;
    vector<ll>v;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    ll mx=1,j=0,cnt=1;
    for(int i=0;i<n;i++)
    {
       j=i+1;
       while(v[j-1]*2>=v[j]&&j<n)
       {
           cnt++;
           j++;
       }
       i=j-1;
       mx=max(mx,cnt);
       cnt=1;
    }
    cout<<mx<<"\n";
}
