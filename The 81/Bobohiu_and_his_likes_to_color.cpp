#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll ev_check(ll r,ll g,ll b,ll w)
{
    int cnt=0;
    if(r%2==0)cnt++;
    if(g%2==0)cnt++;
    if(b%2==0)cnt++;
    if(w%2==0)cnt++;
    return cnt;
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin>>t;
  while(t--)
  {
    ll r,g,b,w;
    cin>>r>>g>>b>>w;
    int cnt=0;
    cnt=ev_check(r,g,b,w);
    if(cnt>=3)
        cout<<"Yes"<<"\n";
    else
    {
        if(r>0 && g>0 &&b>0)
        r--,g--,b--,w+=3;

        cnt=ev_check(r,g,b,w);
        if(cnt>=3)
            cout<<"Yes"<<"\n";
        else
            cout<<"No"<<"\n";
    }
  }
}
