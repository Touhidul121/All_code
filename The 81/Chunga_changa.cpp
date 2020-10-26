#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    ll x,y,z,ans1=0,ans2=0,r,ex=0;
    cin>>x>>y>>z;
    ans1=x/z;
    ans2=y/z;

ll    rem1=x%z;
 ll   rem2=y%z;

    if(rem1>=rem2)
    {
         r=z-rem1;
        if(rem2>=r)
            ex=r;
        else
            ex=0;
    }
    else if(rem2>rem1)
    {
         r=z-rem2;
        if(rem1>=r)
            ex=r;
        else
            ex=0;
    }
    if(ex>0)
        cout<<ans1+ans2+1<<" "<<ex<<endl;
    else
        cout<<ans1+ans2<<" "<<ex<<endl;
}
