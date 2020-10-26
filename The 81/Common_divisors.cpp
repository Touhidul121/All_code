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
    ll gcd=0;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        gcd=__gcd(a,gcd);
    }
    set<ll>st;

    for(ll i=1;i*i<=gcd;i++)
    {
        if(gcd%i==0)
        {
            st.insert(i);
            st.insert(gcd/i);
        }
    }
    cout<<st.size()<<"\n";

}
