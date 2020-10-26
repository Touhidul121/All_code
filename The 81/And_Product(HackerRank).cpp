#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        ll a,b;
        cin>>a>>b;
        ll d=b-a+1;

        ll res=0;
        ll f=1;

        for(int i=0;i<=31;i++)
        {
            if(d>(f<<i))
                continue;
            else if((a&(f<<i))&& (b&(f<<i)))
            res+=(f<<i);
        }
        cout<<res<<"\n";
    }
}
