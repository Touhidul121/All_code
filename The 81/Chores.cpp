#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b;
    int cnt=0;
    cin>>n>>a>>b;
    int ar[n+1];
    for(int i=1;i<=n;i++)cin>>ar[i];

    sort(ar+1,ar+n+1);
    int x=ar[b];


    for(int i=b+1;i<=n;i++)
        if(ar[i]>x)cnt++;
    if(cnt<a)cout<<0<<"\n";
    else
    {
        cout<<ar[b+1]-ar[b]<<"\n";
    }
}
