#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,x=0;
    cin>>n>>k;
    int a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int i=1;i<n;i++)
    {
        if(a[i]-a[i-1]>k)
            x=i;
    }
    cout<<n-x<<endl;
}
