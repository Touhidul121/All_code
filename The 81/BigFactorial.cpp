#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;

    long long    fact=1;
    for(long long i=n;i>=1;i--)
    {

        fact=((fact%10000)*(i%1000))%10000;
    }
    cout<<fact<<"\n";
}
