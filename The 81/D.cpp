#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll r,g,b,a;
    cin>>r>>g>>b;
    priority_queue<ll>p1,p2,p3;
     for(ll i=0;i<r;i++)
     {
         cin>>a;
         p1.push(a);
     }
     for(ll i=0;i<g;i++)
     {
         cin>>a;
         p2.push(a);
     }

     for(ll i=0;i<b;i++)
     {
         cin>>a;
         p3.push(a);
     }


    ll ans=0,cnt=0;
    ll x=0,y=0,z=0,r1=0,r2=0;

    int i=0;
    while(i<=8000)
    {
        vector<ll>v;
        x=0,y=0,z=0;

        if(!p1.empty())
            x=p1.top();
        else cnt++;
        if(!p2.empty())
            y=p2.top();
        else
            cnt++;
        if(!p3.empty())
            z=p3.top();
        else
            cnt++;

        if(cnt>1)break;


        v.push_back(x);
        v.push_back(y);
        v.push_back(z);
        sort(v.rbegin(),v.rend());
        r1=v[0],r2=v[1];

        if(r1==x)
        {
            p1.pop();
            if(r2==y)p2.pop();
            else if(r2==z)p3.pop();
        }
        else if(r1==y)
        {
            p2.pop();
            if(r2==x)p1.pop();
            else if(r2==z)p3.pop();
        }
        else if(r1==z){
                p3.pop();
        if(r2==x)p1.pop();
        else if(r2==y)p2.pop();
        }



        ans+=(r1*r2);
        x=0,y=0,z=0,cnt=0;i++;
v.clear();



    }
    cout<<ans<<"\n";
}

