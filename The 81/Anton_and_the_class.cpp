#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll n,m;
    cin>>n;

    ll a,b,c,d;

    vector<pair<ll,ll>>v,v1,v2,v3;

    for(ll i=0;i<n;i++)
    {
        cin>>a>>b;
        v.push_back(make_pair(b,a));
        v2.push_back(make_pair(a,b));
    }

    sort(v.begin(),v.end());
sort(v2.begin(),v2.end());
    cin>>m;
    for(ll i=0;i<m;i++)
    {
        cin>>c>>d;
        v1.push_back(make_pair(c,d));
        v3.push_back(make_pair(d,c));
    }

    sort(v1.begin(),v1.end());
sort(v3.begin(),v3.end());
    ll x,y,y1,x1;
    x=v[0].first;

    y=v1[v1.size()-1].first;
    x1=v3[0].first;
    y1=v2[v2.size()-1].first;
//cout<<x<<" "<<y<<" "<<x1<<" "<<y1<<"\n";
    if(x>y&&x1>y1)
        cout<<0<<"\n";
    else
        cout<<max(y-x,y1-x1)<<"\n";
}
