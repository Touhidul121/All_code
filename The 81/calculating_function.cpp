#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n,no_ev,no_odd,sum1=0,sum2=0;
    cin>>n;
    if(n%2==0)
    {
        no_ev=n/2;
        no_odd=(n/2);
    }
    else
    {
    no_odd=n/2+1;
    no_ev=n-no_odd;

    }
    sum1=no_ev*(no_ev+1);
    sum2=no_odd*no_odd;
    cout<<sum1-sum2<<endl;
}
