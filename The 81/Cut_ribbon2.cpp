#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,c,r,z,ans=0;

    cin>>n>>a>>b>>c;

    for(int i=0;i<=4000;i++)
    {
        for(int j=0;j<=4000;j++)
        {
            z=(n-(a*i+b*j));
            if(z%c==0 && z>=0)
            {
                r=z/c;
                ans=max(ans,i+j+r);
            }

        }
    }
    cout<<ans<<"\n";
}
