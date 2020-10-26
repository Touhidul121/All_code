#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll a[1000000]={0};
set<ll>s;
void sieve(int n)
{
    for(int i=4;i<=n;i+=2)
    {
      a[i]=1;
    }

    for(int i=3;i<=sqrt(n);i+=2)
    {
        if(!a[i])
        {
            for(int j=i*i;j<=n;j+=i)
            {
                a[j]=1;
            }
        }
    }
    for(int i=2;i<=n;i++)
    {
        if(!a[i]){
            s.insert((ll)i*i);

        }
    }
}
int main()
{
    sieve(1000000);
    ll n,x;
    cin>>n;

    while(n--)
    {
        cin>>x;
        if(s.find(x)!=s.end())
        cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }

}
