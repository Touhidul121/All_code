#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,a,l1,l2,sum1,sum2,x,y,count=0,x1,y1,x2,y2;
        cin>>n;
        vector<pair<ll,ll>>v1;
        set<int> v2,v3;

        vector<ll>v;


        for(int i=0;i<n;i++)
        {
           cin>>a;
           v.push_back(a);
        }
        for(ll i=0;i<n-1;i++)
        {
          l1=i+1;

          l2=n-1-i;
          for(ll p=0;p<l1;p++)
          {
              v2.insert(v[p]);
          }


          for(int p=l1;p<n;p++)
          {
              v3.insert(v[p]);
          }
          x1=*v2.begin();
          y1=*v2.rbegin();
          x2=*v3.begin();
          y2=*v3.rbegin();
          if(x1==1&&x2==1&&y1==l1&&y2==l2&&v2.size()==l1&&v3.size()==l2){
            count++;
            v1.push_back(make_pair(l1,l2));
          }
          v2.clear();
          v3.clear();

        }
        cout<<count<<endl;
        for(ll i=0;i<v1.size();i++)
        {
            cout<<v1[i].first<<" "<<v1[i].second<<endl;
        }
        cout<<endl;
        v.clear();
        v1.clear();
    }
}
