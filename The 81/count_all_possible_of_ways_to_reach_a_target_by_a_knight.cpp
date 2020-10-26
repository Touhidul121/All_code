#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;

int power(int a,int n)
{
    int res=1;
    while(n>0)
    {
        if(n&1)
            res=(res*a)%mod;
        n=n/2;
        a=(a*a)%mod;
    }
    return res;
}
int fact(int n)
{
    int res=1;
    for(int i=1;i<=n;i++)
        res=(res*i)%mod;
    return res;
}
int nCr(int n,int k)
{
    int res=1;
    res=(res*fact(n))%mod;
    res=(res*power(fact(k),mod-2))%mod;
    res=(res*power(fact(n-k),mod-2))%mod;
    return res;
}
int countways(int n,int m)
{
    if((n+m)%3 !=0)return 0;

    int x=(2*m-n)/3;
    int y=(2*n-m)/3;

    if(x<0 || y<0)return 0;
    return nCr(x+y,y);
}
int main()
{
   int n,m;
   cin>>n>>m;
   cout<<countways(n,m)<<"\n";
}
