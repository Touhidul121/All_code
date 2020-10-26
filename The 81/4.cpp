#include<bits/stdc++.h>
using namespace std;

bool isPrime(long long n)
{
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}

int main()
{
    long long n;
    cin>>n;
    if(isPrime(n))
        cout<<"YES"<<"\n";
    else
        cout<<"NO"<<"\n";
}
