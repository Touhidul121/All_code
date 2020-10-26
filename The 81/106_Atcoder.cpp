#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll power(ll a,ll n)
{
    ll res=1;
    while(n)
    {
        if(n&1)
            res=res*a;
        n=n/2;
        a=a*a;
    }
    return res;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    ll N;
    cin>>N;
    for(ll i=1;i<=37;i++)
    {
        for(ll j=1;j<=25;j++)
        {
            if(power(3ll,i)+power(5ll,j)==N)
            {
                cout<<i<<" "<<j<<"\n";return 0;
            }
        }
    }
    cout<<-1<<"\n";
}
