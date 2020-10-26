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
        ll n,jk,tm;
        cin>>n>>jk>>tm;
        ll card=n/tm;

         if(card>jk)
            cout<<jk<<"\n";
        else
        {
            ll rem=jk-card;

            tm--;
            ll res=(int)ceil(rem/(tm*1.0));

            cout<<card-res<<"\n";
        }
    }
}
