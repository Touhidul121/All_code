#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        ll x,y,k,r=0;
        cin>>x>>y>>k;
        double total=(y+1)*k;
        ll ans=ceil((total-x)/(x-1));
        ll total1=(ll)total;
        if(ans*(x-1)+1>=total1)ans--;
        else if(ans*(x-1)+x>=total1)ans++;
        else ans+=2;
        cout<<ans+k<<"\n";
    }
}
