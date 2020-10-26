#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n,x=0;
    cin>>n;
    ll b[n];
    for(int i=0;i<n;i++)
        cin>>b[i];
        vector<ll>c;
        c.push_back(x+b[0]);


    for(ll i=1;i<n;i++)
    {
       x=max(c[i-1],x);
       c.push_back(b[i]+x);

    }
    for(int i=0;i<n-1;i++){


        cout<<c[i]<<" ";
    }
cout<<c[n-1]<<endl;
}
