#include<bits/stdc++.h>
using namespace std;
vector<int>primes;

void sieve(int n)
{
    vector<int>v(n,1);
    v[0]=v[1]=0;

    for(int i=2;i*i<=n;i++)
    {
        if(v[i])
        {
            for(int j=2*i;j<=n;j+=i)
                v[j]=0;
        }
    }
    for(int i=1;i<=32;i++)
    {
        if(v[i])primes.push_back(i);
    }
}
int get_div(int n)
{
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)return i;
    }
    return n;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    sieve(100);

    map<int,int>mp;
    int k=1;
    for(auto x:primes)
    {
      mp[x]=k++;
    }
    int t;
    cin>>t;
    while(t--)
    {
        int n,a;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            cout<<mp[get_div(a)]<<" ";
        }
    }
}
