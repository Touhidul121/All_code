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
        string s;
        cin>>s;
        ll r=s[0]-'0';
        ll p=s.size();
        ll ans=(r-1)*10+((p*(p+1))/2);
        cout<<ans<<"\n";
    }
}
