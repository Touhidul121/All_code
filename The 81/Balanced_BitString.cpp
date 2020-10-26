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
        ll n,k,x,y,z;
        cin>>n>>k;
        string s;
        cin>>s;
        vector<ll>arr1(n+1),arr0(n+1),arrx(n+1);
        bool f1=false;int cnt1=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')arr0[i+1]++;
            if(s[i]=='1')arr1[i+1]++;
            if(s[i]=='?')arrx[i+1]++,f1=true,cnt1++;
        }
        if(f1==false || cnt1==n)cout<<"YES"<<"\n";
        else{
        for(int i=1;i<=n;i++)arr0[i]+=arr0[i-1];
        for(int i=1;i<=n;i++)arr1[i]+=arr1[i-1];
        for(int i=1;i<=n;i++)arrx[i]+=arrx[i-1];



        bool f=false;
        for(int i=k;i<=n;i++)
        {
            x=arr0[i]-arr0[i-k];
            y=arr1[i]-arr1[i-k];
            z=arrx[i]-arrx[i-k];
            if(min(x,y)+z<max(x,y))
            {
                f=true;break;
            }
            else
            {
                int req=(x+y+z)/2;
                int req1=req-y;
                int req2=req-x;
                if(req1+req2!=z)
                {
                    f=true;break;
                }
                if(min(x,y)==x){
                        if(i+1<=n)
                    arr0[i+1]++,arrx[i+1]--;

                }
                else
                {
                    if(i+1<=n)
                        arr1[i+1]++,arrx[i+1]--;
                }
            }
        }
        if(f)
            cout<<"NO"<<"\n";
        else
            cout<<"YES"<<"\n";
        }
    }
}
