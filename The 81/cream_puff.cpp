#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
set<ll>st;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    ll n;
    cin>>n;

    for(ll i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            st.insert(i);st.insert(n/i);
        }
    }
    for(auto x:st)
        cout<<x<<"\n";
}
