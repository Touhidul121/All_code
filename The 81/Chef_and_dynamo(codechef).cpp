#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll power(ll a,int n)
{
    ll res=1;
    while(n>0)
    {
        if(n&1)
            res=res*a;
        n=n/2;
        a=a*a;
    }
    return res;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   ll N,A,S,B,C,D,E,result;
    int t;
    cin>>t;
    for (int i=1;i<=t;i++)
    {

      cin>>N>>A;
      ll x=power(10,N);

       S=A+(2*x);
       cout<<S<<"\n";
        fflush(stdout);
       cin>>B;
       cout<<x-B<<"\n";
        fflush(stdout);
       cin>>D;
       cout<<x-D<<"\n";
        fflush(stdout);

       cin>>result;

       if(result==-1)break;
    }
    return 0;
}
