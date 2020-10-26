#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll x;
        cin>>x;
        ll no_dice=(ll)floor(x/14.0);
        if(x<14)
            no_dice=1;
        if(x>=no_dice*14+1&&x<=no_dice*14+6)
            cout<<"YES"<<"\n";
        else
            cout<<"NO"<<"\n";
    }
}
