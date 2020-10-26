#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++)cin>>a[i];

    for(int j=0;j<m;j++)cin>>b[j];

    int ans=INT_MAX,ans1=0,c=0;

    for(int j=0;j<m;j++)
    {

        for(int i=0;i<n;i++)
        {
            c=b[j]&a[i];
            ans1=ans1|c;
        }
        cout<<ans1<<"\n";
        ans=min(ans,ans1);

    }
    cout<<ans<<"\n";
}
