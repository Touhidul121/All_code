#include<bits/stdc++.h>
#define ll long long int
using namespace std;

vector<int>v[3000005];
int main()
{
    ll t,m=INT_MAX;
    cin>>t;

    while(t--)
    {
        ll n,a,b,x,bullet=0,count=1,start;
cin>>n;
        for(ll i=0;i<n;i++)
        {
            cin>>a>>b;
            v[i+1].push_back(a);
            v[i+1].push_back(b);
            if(m>a){
                m=a;
                x=i+1;
            }

        }
        bool o=true;
        for(int i=1;i<=4;i++)
        {
            cout<<v[i][0]<<" "<<v[i][1]<<endl;
        }
        cout<<m<<endl;
        start=x;
        for(int i=start;i<=6;i++)
        {

           count++;
           bullet+=m;
           v[i+1][0]-=v[i][1];
           if(v[i+1][0]<=0&&v[i+1][0]>0){
                continue;
           }
           else{
            bullet+=(v[i+1][0]-v[i][1]);

           }
           cout<<bullet<<endl;



         }

        cout<<bullet<<endl;

    }
}
