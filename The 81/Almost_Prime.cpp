#include<bits/stdc++.h>
using namespace std;

int a[100005];
int v[100005];

void sieve(int n)
{
    for(int i=4;i<=n;i+=2)
        a[i]=1;

    for(int i=3;i<=sqrt(n);i+=2)
    {
        if(a[i]==0)
        {
            for(int j=i*i;j<=n;j+=i)
                a[j]=1;
        }
    }
    int k=0;
    for(int i=2;i<=n;i++)
    {

        if(a[i]==0)
            v[k++]=i;
    }
}

int main()
{
    sieve(100005);
    int n;
    cin>>n;
    int countf=0,count=0;
    int j;

    for(int i=1;i<=n;i++)
    {
       j=0;
       while(v[j]<i)
       {
           if(i%v[j]==0)
            count++;
    j++;
       }
       if(count==2)
        countf++;
       count=0;
    }
    cout<<countf<<"\n";
}
