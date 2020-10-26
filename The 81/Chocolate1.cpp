#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n,a;
    cin>>n;
    ll res=1;
    ll prev=1;bool f=true;

    for(ll i=1;i<=n;i++)
    {
        cin>>a;
        if(a==1 && f)
        {
            prev=i;
            f=false;
        }
        else if(a==1 && !f)
        {
            res=res*(i-prev);
            prev=i;
        }
    }
    if(f)cout<<0<<"\n";
    else
    cout<<res<<"\n";
}
