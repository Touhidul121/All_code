#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
ll t;
cin>>t;
while(t--)
{
    ll n,s,a;
    cin>>n>>s;

    vector<pair<ll,ll>>v;
    vector<ll>v1,v2;
    for(ll i=0;i<n;i++)
    {
      cin>>a;
      v1.push_back(a);
    }
     for(ll i=0;i<n;i++)
    {
      cin>>a;
      v2.push_back(a);
    }
     for(ll i=0;i<n;i++)
    {

      v.push_back(make_pair(v1[i],v2[i]));
    }
    sort(v.begin(),v.end());

    bool g=true,e=true;
    ll x=0,y=0;
    for(ll i=0;i<n;i++)
    {
        if(v[i].second==1&&g)
        {
            x=v[i].first;
            g=false;
        }
        if(v[i].second==0&&e)
        {
            y=v[i].first;
            e=false;
        }
        if(!g&&!e)
            break;
    }
    if(x==0||y==0)
        cout<<"No"<<"\n";
    else
    {
        if(s+x+y<=100)
            cout<<"yes"<<"\n";
        else
            cout<<"no"<<"\n";
    }
    cout<<s+x+y<<endl;

}
return 0;
}
