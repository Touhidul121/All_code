#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    int a[1005],b[1005];
    int i=0;

    while(m--)
    {
        cin>>a[i++];
        b[i-1]=a[i-1];
    }
    sort(a,a+i);
    sort(a,a+i,greater<int>());

    int mn=0,mx=0;

    int k=0;

    for(int i=0;k<n;i++)
    {
        if((n-k)>=a[i])
        {
            mn+=a[i]*(b[i]+1)/2;
        }
        else
        {
            while(k<n)
            {
                mn+=a[i]--;
                k++;
            }
        }
    }
    k=0;

    while(k<n)
    {
        mx+=a[0]--;
        sort(b,b+m,greater<int>());
        k++;
    }

}
