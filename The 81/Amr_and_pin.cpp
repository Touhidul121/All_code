#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    ll r,x,y,x1,y1;
    cin>>r>>x>>y>>x1>>y1;
    double d=sqrt((x-x1)*(x-x1)+(y-y1)*(y-y1));
    double ans;
    ans=ceil(d/(2*r));
    cout<<(ll)ans<<"\n";
    return 0;
}
