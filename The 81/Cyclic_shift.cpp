#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll n=s.size();

        map<char,ll>mp;
        for(int i=0;i<n;i++)
        {
            mp[s[i]]++;
        }
        if(n==2)
            cout<<0<<"\n";
        else{
        int i=2;
        while(s[i]==s[i-2]&&s[i+1]==s[i-1]&&i<n)
        {
            i+=2;
        }

        ll ans=(n-i);

        if(mp.size()==1)
        {
            cout<<0<<"\n";
        }
        else
        {
            ll mx=0;
            for(auto x:mp)
            {
             mx=max(x.second,mx);
            }
            cout<<min(ans,(n-mx))<<"\n";
        }

        }

    }
}
