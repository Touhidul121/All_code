#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n,m;
        cin>>n>>m;
        int x=0,t,l,h,count=0;

        for(int i=0;i<n;i++)
        {
            cin>>t>>l>>h;

            if(t-x>=abs(m-l)t-x>=abs(m-h))
                count++;
            x=t;
        }
        if(count==n)
            cout<<"YES"<<"\n";
        else
            cout<<"NO"<<"\n";
    }
}
