#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll r,x,y,x1,y1;
    cin>>r>>x>>y>>x1>>y1;

    double dist=sqrt((x1-x)*(x1-x)+(y1-y)*(y1-y));

    dist=ceil(dist/(2*r));
    cout<<(ll)dist<<"\n";
}
