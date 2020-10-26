#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--)
    {
      ll n,a;
      cin>>n;
      vector<ll>v,ans;
      for(int i=0;i<n;i++)
      {
          cin>>a;
          v.push_back(a);
      }
      ll x=v[0]+v[1];
      bool f=false;
      for(int i=2;i<n;i++)
      {
          if(v[i]>=x)
          {
              ans.push_back(1);
              ans.push_back(2);
              ans.push_back(i+1);
              f=true;
              break;
          }
      }

      if(f)
        {
            for(ll x:ans)
                cout<<x<<" ";
            cout<<"\n";
        }
      else
        cout<<-1<<"\n";
    }
}
