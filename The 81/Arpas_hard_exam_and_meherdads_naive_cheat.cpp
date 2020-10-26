#include<bits/stdc++.h>
using namespace std;
#define mod 10
int power(int a,int n)
{
    int res=1;
    while(n)
    {
        if(n&1)
        {
            res=(res*a)%mod;n--;
        }
        n=n/2;
        a=(a*a)%mod;
    }
    return res;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int n;
    cin>>n;
    cout<<power(1378,n)<<"\n";
}
