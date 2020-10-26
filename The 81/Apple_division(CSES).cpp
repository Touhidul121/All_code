#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll n,a;
    cin>>n;
    vector<ll>v;
    ll sum=0;
    ll mn=INT_MAX;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        sum=sum+a;
        v.push_back(a);

    }
   //cout<<sum<<"\n";
    if(n==1)
        cout<<v[0]<<"\n";
    else{
    ll sum1=0;
    for(int i=0;i<pow(2,n);i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i&(1<<j))
                sum1+=v[j];
        }
        //cout<<sum<<" "<<sum1<<"\n";
        mn=min(mn,abs(sum1-(sum-sum1)));
        sum1=0;
    }
    cout<<mn<<"\n";
    }
}
