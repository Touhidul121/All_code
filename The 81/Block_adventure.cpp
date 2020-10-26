#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

     int t;
     cin>>t;
     while(t--)
     {
         ll n,m,k,b,x,res;
         cin>>n>>m>>k;
         vector<ll>a;
         for(int i=0;i<n;i++)
         {
             cin>>b;
             a.push_back(b);
         }
         bool f=false;
         for(int i=0;i<n-1;i++)
         {


            if(a[i]>a[i+1])
                m+=min((a[i]-a[i+1])+k,a[i]);
            else if(a[i]==a[i+1])
                m+=min(k,a[i]);
            else
            {
                if(a[i+1]-a[i]>k)
                {
                    m-=((a[i+1]-a[i])-k);
                    if(m<0)
                    {
                        f=true;
                        break;
                    }
                }
                else
                    m+=min((k-(a[i+1]-a[i])),a[i]);
            }
         }
         if(f)
            cout<<"NO"<<"\n";
         else
            cout<<"YES"<<"\n";
     }
}
