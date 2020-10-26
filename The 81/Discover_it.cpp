#include<bits/stdc++.h>
using namespace std;
int a[1000007];
int v[1000007];
sieve(int n)
{
    for(int i=4;i<=n;i+=2)
    {
        a[i]=1;
    };
    for(int i=3;i<=sqrt(n);i+=2)
    {
        if(a[i]==0)
        {
            for(int j=i*i;j<=n;j+=i)
            {
                a[j]=1;
            }
        }
    }
    int k=0;
    for(int i=2;i<=n;i++)
    {
        if(a[i]==0)
            v[k++]=i;
    }
}

int v[1000007];
int main()
{
    sieve(1000000);
    int n,a;
    cin>>n;
    for(int i=0;i<2*n;i++)
    {
        cin>>a;
        v1[a]++;
    }

    vector<int>ans;

    for(int i=1000006;i>=0;i--)
    {
        while(v1[i]>0)
        {
            if()
        }
    }
}
