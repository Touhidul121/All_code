#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        ll n,a,ans=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            if(a>=0)
            {

                    ans+=a;
            }
            else
            {
                if(ans>=abs(a))
                    ans+=a;
                else
                    ans=0;
            }
        }
    cout<<ans<<"\n";


    }
}
