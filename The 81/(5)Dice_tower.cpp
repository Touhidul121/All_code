#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--){
    ll n;
    cin>>n;
    double d=floor(n/(14*1.0));
    ll x=(ll)(d);
    ll r=n%14;



    if(x>=1&&(r>=1&&r<=6))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    }
}
