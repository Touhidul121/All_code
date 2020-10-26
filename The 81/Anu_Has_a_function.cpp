#include<bits/stdc++.h>
using namespace std;

int count_bit(int a)
{
    int res=0;
    while(a>0)
    {
        res++;
        a=a&(a-1);
    }
    return res;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int n,a;
    cin>>n;
    int x,mx=0;
    vector<int>v(n);

    for(int i=0;i<n;i++)cin>>v[i];

    vector<int>pref(n+1);

    for(int i=0;i<n;i++)
        pref[i+1]=pref[i]|v[i];

    vector<int>suff(n+2);

    for(int i=n;i>=1;i--)
        suff[i]=suff[i+1]|v[i-1];

    for(int i=1;i<=n;i++)
        cout<<pref[i]<<" ";cout<<"\n";

    for(int i=1;i<=n;i++)
        cout<<suff[i]<<" ";cout<<"\n";

}
