#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,two=0,one=0;
        cin>>n;
        string s;
        cin>>s;
        int a1[n+6],a[n+6],b[n+6];

        for(ll i=0;i<n;i++)
            a1[i]=s[i]-'0';
        for(ll i=0;i<n;i++)
        {
            if(a1[i]==2){
                two=1;
            if(two==1&&one==1)
            {
                a[i]=0;
                b[i]=2;
            }
            else if(two==1&&one!=1)
            {
                a[i]=1;
                b[i]=1;
            }
            }
            else if(a1[i]==1)
            {
                if(two==1&&one!=1)
                {
                    a[i]=1;
                    b[i]=0;
                }
                else if(two==1&&one==1)
                {
                    a[i]=0;
                    b[i]=1;
                }
                    one=1;

            }
            else if(a1[i]==0)
            {
                a[i]=0;
                b[i]=0;
            }
        }
        for(ll i=0;i<n;i++)
            cout<<a[i];
        cout<<endl;
        for(ll i=0;i<n;i++)
            cout<<b[i];
        cout<<endl;

    }
}
