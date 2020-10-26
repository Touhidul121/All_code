#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
  ll k;
  cin>>k;
  ll ans,d,r;
  r=k;
  ans=(ll)ceil(sqrt(k)/3.0);
  string s,res;
  s="codeforces";
  vector<char>v;
ll  j=9;
cout<<ans<<"\n";
  while(k>=0)
  {
      d=k;
      for(int i=0;i<ans;i++)
        v.push_back(s[j]);
        j--;
        if(j<0)
            break;
        k-=(j+2)*ans*(j+1);
  }
  while(j>=0){
  for(int i=0;i<ans-1;i++)
    v.push_back(s[j]);
  j--;
  }
  ll n=v.size();
  for(int i=n-1;i>=0;i--)
    s+=v[i];
  ll rem=r-d;
  for(int j=0;j<rem;j++)
    s+='s';
  cout<<s<<"\n";

}
