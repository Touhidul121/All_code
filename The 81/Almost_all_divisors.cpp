#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--){
    ll n,a;
    cin>>n;
    vector<ll>v,v1;

    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
ll min1,max1;
sort(v.begin(),v.end());
min1=*v.begin();
max1=*v.rbegin();
ll x=min1*max1;

for(ll i=2;i*i<=x;i++)
{
 if(x%i==0&&i==x/i)
 {
     v1.push_back(i);
 }
 else if(x%i==0)
 {
     v1.push_back(i);
v1.push_back(x/i);
 }
}

sort(v1.begin(),v1.end());
if(v1==v)
    cout<<x<<endl;
    else
        cout<<-1<<endl;
    }
}
