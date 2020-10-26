#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int,int>mp,mp1;
    int n1,n2,cnt=0,ans=1;
    cout<<"Enter two Numbers"<<"\n";
    cin>>n1>>n2;
    for(int i=2;i*i<=n1;i++)
    {
        while(n1%i==0)
        {
          cnt++;
          n1/=i;
        }
        mp[i]=cnt;
        cnt=0;
    }
    if(n1>1)
    {
        mp[n1]++;
    }

    cnt=0;
    for(auto x:mp)
    {
        while(n2%x.first==0)
        {
            cnt++;
            n2/=x.first;
        }
        mp1[x.first]=cnt;
        cnt=0;
    }
    if(n2>1 && mp.count(n2))
    {
        mp1[n2]++;
    }
    for(auto x:mp)
    {
        ans*=min(mp[x.first],mp1[x.first])+1;
    }
    cout<<"Number of Common Divisors = "<<ans<<"\n";
}
