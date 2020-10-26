#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>s(n);

        for(int i=0;i<n;i++)cin>>s[i];

        int cnt1=0,cnt2=0;

        for(int i=0;i<n;i++)
        {
            if(s[i]==0)cnt1++;
            else cnt2++;
        }
        if(cnt1>=cnt2){
                cout<<n/2<<"\n";
            for(int i=1;i<=n/2;i++)cout<<0<<" ";
            cout<<"\n";
        }
        else{
              if((n/2)%2==0){
                    cout<<n/2<<"\n";
              for(int i=1;i<=n/2;i++)
              {
                  cout<<1<<" ";
              }
              cout<<"\n";
              }
              else{
                cout<<n/2+1<<"\n";
           for(int i=1;i<=n/2+1;i++)cout<<1<<" ";
           cout<<"\n";
              }




        }
    }
}
