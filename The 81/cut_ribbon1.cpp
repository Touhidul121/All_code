#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,c,k;
    cin>>n>>a>>b>>c;
    int ans=0,res=0;

    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            k=(a*i+b*j);

            if(n>=k && (n-k)%c==0){
                res=i+j+(n-k)/c;
                ans=max(ans,res);
            }
        }
    }
    cout<<ans<<"\n";
}
