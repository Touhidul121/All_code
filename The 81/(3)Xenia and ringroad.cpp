#include<iostream>
#define ll long long int
using namespace std;
int main()
{
    ll n,m,ans=0;
    cin>>n>>m;
    ll a[m];
    for(ll i=0;i<m;i++)
    {
        cin>>a[i];
    }
    ans=a[0]-1;

    for(ll i=0;i<m-1;i++)
    {
        if(a[i]<=a[i+1]){
            ans=ans+(a[i+1]-a[i]);

        }
        else
        {
            ans=ans+(n-a[i]+a[i+1]);

        }

    }
    cout<<ans<<endl;
}
