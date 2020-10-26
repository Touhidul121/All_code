#include<bits/stdc++.h>
using namespace std;
#define maxN (int) 1e5
int primes[maxN];
void sieve(int n)
{
    for(int i=1;i<=n;i++)
        primes[i]=1;
    primes[0]=primes[1]=0;

    for(int i=2;i*i<=n;i++)
    {
        if(primes[i]==1)
        {
            for(int j=i*i;j<=n;j+=i)
            {
                primes[j]=0;
            }
        }
    }

    for(int i=2;i<=n;i++)
    {
        if(primes[i]==1)
            cout<<i<<" ";
    }
}

int main()
{
    sieve(100);
}
