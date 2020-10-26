#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int t;
    cin>>t;
    while(t--){
    ll n,m,k,ans=0;
    cin>>n>>m;
    k=n/m; // n er moddhe m er koto gulo multiple ache
    vector<ll>v;
    ll sum=0;
    for(int i=1;i<=10;i++)
    {
        v.push_back((i*m)%10); // pattern joma rakha
        sum+=(i*m)%10;
    }


    ll r=k/v.size(); // koto gulo purno sonkhok pattern ache
    ll rem=k%v.size(); // purno niye obosishto ja pore thake
    ans=r*sum;

    for(int i=0;i<rem;i++)
    {
        ans+=v[i];
    }
    cout<<ans<<"\n";
    }
}
