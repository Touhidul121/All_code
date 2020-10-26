#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int str,intel,n;
        cin>>str>>intel>>n;
         if(str+n<=intel)
            cout<<0<<"\n";
       else if(n==0)
            {
                if(str>intel)
                cout<<1<<"\n";
                else
                cout<<0<<"\n";
            }
       else if(str==intel)
        {
            int ans=(n+1)/2;

                cout<<ans<<"\n";

        }
        else{
            int x=(n+1+(intel-str))/2;
             if(n%2==0)
                cout<<n-x<<"\n";
            cout<<(n+1)-x<<"\n";
        }

    }
}
