#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {

    ll x,y,n,m;
    cin>>x>>y>>n>>m;
    if(min(x,y)<m)
        cout<<"No"<<"\n";
    else{
            if(min(x,y)==x)
            x-=m;
            else
                y-=m;
        if(x+y<n)
            cout<<"No"<<"\n";
        else
        cout<<"Yes"<<"\n";
    }

    }
}
