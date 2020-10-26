#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void fun()
{
    ll n,v;
    cin>>n;
    vector<int>a;

    for(ll i=0;i<n;i++)
    {
        cin>>v;
        a.push_back(v);
    }

    ll i=0,j=n-1,k=1,count=0,lsum=0,rsum=0, alice=0,bob=0;
    bool g=false,f=false;
    ll sum1=0,sum2=0;
    while(i<j)
    {
      if(k%2!=0)
      {
          g=false;
          sum1=0;

          if(sum1<=rsum)
          {
           while(sum1<=rsum&&i<j)
           {
               sum1+=a[i];
               i++;
           }
           if(sum1>rsum)
           {
            g=true;
            count++;
           }
           lsum=sum1;
          }
          else
          {
              sum1=a[i];
              i++;
              g=true;
              count++;
              lsum=sum1;
          }
          alice+=lsum;
      }
      else
      {
          f=false;

          sum2=0;

          if(sum2<=lsum)
          {
           while(sum2<=lsum&&i<j)
           {
               sum2+=a[j];
               j--;
           }
           if(sum2>lsum)
           {
               count++;
            f=true;
           }
           rsum=sum2;
          }
          else
          {
              sum2=a[j];
              j--;
              f=true;
              count++;
              rsum=sum2;

          }
          bob+=rsum;
      }

cout<<sum1<<" "<<sum2<<"\n";
cout<<i<<" "<<j<<"\n";
      if(((k&1)&&g==false)||(!(k&1)&&f==false))
      {
          break;
      }
      k++;
    }

cout<<i<<" "<<j<<"\n";
    if(j-i>1)
    {
        if(k&1)
        {
          for(int l=i;l<j;l++)
                alice+=a[i];
        }
        else
        {
            for(int l=j;j>i;j--)
                bob+=a[j];
        }
        count++;
    }

    cout<<count<<" "<<alice<<" "<<bob<<"\n";

}
int main()
{
  ll t;
  cin>>t;
  while(t--)
  {
      fun();
  }
}
