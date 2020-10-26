#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool get_all_prime_div(ll n)
{

  while(n%2==0)
  {
      n/=2;
  }
  if(n==1)
  return true;
  while(n%3==0)
  {
      n/=3;

  }
  if(n==1)
    return true;
  else
    return false;
}


int main()
{
    int n,a;
    cin>>n;
    int gcd=0,x;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
        gcd=__gcd(gcd,a);
    }
    bool flag=false,r;
    for(int i=0;i<n;i++)
    {
       x=v[i]/gcd;

    r=get_all_prime_div(x);
                if(r==0)
                {
                    flag=true;
                    break;
                }
            }

    if(flag)
        cout<<"NO"<<"\n";
    else
        cout<<"YES"<<"\n";
}
