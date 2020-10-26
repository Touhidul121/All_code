#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t1;
    cin>>t1;

    while(t1--)
    {
        ll n1,k1;
        cin>>n1>>k1;
        if(k1*k1>n1)
            cout<<"NO"<<endl;
        else if(n1%2!=0&&k1%2==0)
            cout<<"NO"<<endl;
        else if(n1%2==0&&k1%2!=0)
            cout<<"NO"<<endl;

        else
            cout<<"YES"<<endl;
    }
}
