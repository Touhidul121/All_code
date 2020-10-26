#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll extended_euclid(ll a,ll b,ll &x,ll &y)
{
    if(a==0)
    {
        x=0;
        y=1;
        return b;
    }
    ll x1,y1,gcd;
    gcd=extended_euclid(b%a,a,x1,y1);
    x=y1-(b/a)*x1;
    y=x1;
    return gcd;
}
int main()
{
    ll a,b,x,y;
    while((cin>>a>>b)){

    ll gcd=extended_euclid(a,b,x,y);
       if(a==b)
       {
           x=0;
           y=1;
       }
    cout<<x<<" "<<y<<" "<<gcd<<"\n";
    }
}

