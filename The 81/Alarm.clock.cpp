#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
ll t;
cin>>t;
while(t--)
{
    ll a,b,c,d;
    cin>>a>>b>>c>>d;

    if(b>=a)
        cout<<b<<"\n";
    else if(b<a&&(d>=c))
        cout<<-1<<"\n";
    else
    {
        ll x=(ll)ceil(((a-b)*1.0)/((c-d)*1.0));
        //cout<<a-b<<" "<<c-d<<"\n";
        cout<<b+c*x<<"\n";
    }
}
}
