#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    ll n,x,y,x1,y1,x2,y2,x3,x4,y3,y4;
    ll mx=LLONG_MIN,mn=LLONG_MAX,mx1=LLONG_MIN,mn1=LLONG_MAX;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        if(mx<x+y)
        {
            mx=x+y;
            x2=x,y2=y;
        }

        if(mn>x+y)
        {
            mn=x+y;
            x1=x,y1=y;
        }
        if(mx1<x-y)
        {
           mx1=x-y;
           x3=x,y3=y;
        }
        if(mn1>x-y)
        {
            mn1=x-y;
            x4=x,y4=y;
        }
    }

    cout<<max(((x2+y2)-(x1+y1)),(x3-y3)-(x4-y4))<<"\n";
}
