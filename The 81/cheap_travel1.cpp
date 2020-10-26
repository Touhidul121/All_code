#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,a,b,cost=0;
    cin>>n>>m>>a>>b;

    double x=(b*1.0)/m;
    if(x<a)
    {
        int rides=floor((n*1.0)/m);
        cost=rides*b;
        rides*=m;
        cost+=min(b,(n-rides)*a);
    }
    else cost=n*a;

    cout<<cost<<"\n";
}
