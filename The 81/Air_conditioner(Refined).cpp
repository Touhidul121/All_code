#include<bits/stdc++.h>
using namespace std;
#define maxN 101
int t[maxN],lo[maxN],hi[maxN];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,m;
        cin>>n>>m;
        for(int i=0;i<n;i++)cin>>t[i]>>lo[i]>>hi[i];

        int prev=0,mn=m,mx=m; // mn denotes min possible temp and mx denotes max possible temp possible according to the circumstances
        bool f=true;
        for(int i=0;i<n;i++)
        {
            mn-=(t[i]-prev); // t[i]-prev denotes the amount of time Gildong get's in between the departure and coming of a customer.So in this time I can decrease the temp an most mn-=(t[i]-prev) and I can increase the temp at most mx+=(t[i]-prev)
            mx+=(t[i]-prev);

            if(lo[i]>mx || hi[i]<mn) // out of range
            {
                f=false;break;
            }
            mx=min(mx,hi[i]);
            mn=max(mn,lo[i]);

            prev=t[i];
        }

        if(!f)cout<<"NO"<<"\n";
        else cout<<"YES"<<"\n";
    }

}
