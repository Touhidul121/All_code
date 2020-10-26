#include<bits/stdc++.h>
typedef long long ll;

using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,sum=0,sum1=0;
        cin>>n;

        if((n/2)%2==1)
            cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            ll j=2,k=1;
           for(int i=1;i<=n/2;i++)
           {
               cout<<j<<" ";
               sum+=j;
               j+=2;
           }
           for(int i=1;i<=n/2-1;i++)
           {
             cout<<k<<" ";
             sum1+=k;
             k+=2;
           }
           cout<<sum-sum1<<endl;

        }
    }
}
