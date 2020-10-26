#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--){
ll n;
cin>>n;

ll cnt=0,x;
while(n>1)
{
x=(int)((-1)+sqrt(1+24*n))/6;
    cnt++;
    n-=(2*x+(3*(x*(x-1)))/2);
}
cout<<cnt<<"\n";
    }
}
