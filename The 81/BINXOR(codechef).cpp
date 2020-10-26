#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll t,n,bitsA,bitsB, res,mn,mx;

    char c;
    cin>>t ,init();

    while(t--)
    {
        cin>>n;
        bitsA=0,bitsB=0;

        for(int i=1;i<=n;i++)
            bitsA+=c-'0';
        for(int i=1;i<=n;i++)
            bitsB+=c-'0';
        res=0;

        mx=bitsA+bitsB - 2*max(0,bitsB+bitsA-n);
        mn=abs(bitsA-bitsB);

        for(int i=mx;i>=mn;i-=2)
        {
            ll tmp=
        }
    }
}
