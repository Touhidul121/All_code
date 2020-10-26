#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n&1)
        {
            cout<<n/2<<endl;
        }
        else
            cout<<n/2-1<<endl;
    }
}
