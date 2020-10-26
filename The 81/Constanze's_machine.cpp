#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void multiply(ll F[2][2],ll M[2][2]);
void power(ll F[2][2],ll n);

ll fib(ll n)
{
    ll F[2][2]={{1,1},
                 {1,0}};
                 if(n==0)
                    return 0;
                 power(F,n-1);
                 return F[0][0];
}

void power(ll F[2][2],ll n)
{
    if(n==1||n==0)
        return ;
    ll M[2][2]={{1,1},
                 {1,0}};
                 power(F,n/2);

                    multiply(F,F);
                 if(n&1)
                    multiply(F,M);
}
void multiply(ll F[2][2],ll M[2][2])
{
       ll x =  ((((F[0][0]%mod)*(M[0][0]%mod))%mod)%mod + (((F[0][1]%mod)*(M[1][0]%mod))%mod)%mod)%mod;
    ll y = ((((F[0][0]%mod)*(M[0][1]%mod))%mod)%mod + (((F[0][1]%mod)*(M[1][1]%mod))%mod)%mod)%mod;
    ll z =  ((((F[1][0]%mod)*(M[0][0]%mod))%mod)%mod + (((F[1][1]%mod)*(M[1][0]%mod))%mod)%mod)%mod;
    ll w =  ((((F[1][0]%mod)*(M[0][1]%mod))%mod)%mod +( ((F[1][1]%mod)*(M[1][1]%mod))%mod)%mod)%mod;

    F[0][0] = x;
    F[0][1] = y;
    F[1][0] = z;
    F[1][1] = w;
}

int main()
{
    long long n;
    string s;
    cin>>s;
    n=s.size();
    long long cnt=1,ans=1;
    bool f1=true,f2=false;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='m' || s[i]=='w')
        {
            f2=true;
            break;
        }
    }
    for(int i=0;i<n;i++)
    {
      if((s[i]=='u'|| s[i]=='n') && s[i]==s[i+1])
      {
          cnt++;
          f1=false;
      }
      else if(f1==false)
      {


              ans=(ans*fib(cnt+1))%mod;
              f1=true;
              cnt=1;

      }
    }
    if(f2)
        cout<<0<<"\n";
    else
    cout<<ans<<"\n";
}

