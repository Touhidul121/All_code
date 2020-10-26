#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n,count=0;
    cin>>n;
    ll g=0;
    ll x,r;
    for(ll i=0;i<n;i++)
    {
        cin>>x;
        g=__gcd(g,x);
    }

    for(ll i=1;i*i*1ll<=g;i++)
    {
        if(i*i==g)
            count++;
        else if(g%i==0)
            {

                    count+=2;
            }
    }


            cout<<count<<endl;
}
