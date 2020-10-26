#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        unsigned int ans=0,n;
        cin>>n;
        for(int i=0;i<=31;i++)
        {
           if((n&(1<<i))==0)
                ans+=pow(2,i);
        }
        cout<<ans<<"\n";
    }
}
