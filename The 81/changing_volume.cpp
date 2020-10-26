#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int x=abs(a-b);
        int ans=0;
        if(x>=5)
        {
          ans=x/5;
          if(x%5>=2)
          {
              ans+=(x%5)/2;
              ans+=(x%5)%2;
          }
          else
            ans+=(x%5);
        }
        else if(x>=2)
        {
            ans=x/2;
            ans+=(x%2);
        }
        else
            ans+=x;

        cout<<ans<<"\n";
    }
}
