#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll k2,k3,k5,k6;
    cin>>k2>>k3>>k5>>k6;

    ll x,y;
    x=min(k2,min(k5,k6));
    k2=k2-x;
    y=min(k2,k3);

    cout<<(ll)(256*x+32*y)<<endl;
}
