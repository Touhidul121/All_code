#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
  ll k;
  cin>>k;
  string s="codeforces";

  int val[11];
  for(int i=0;i<10;i++)
        val[i]=1;
    ll whole_product=1;
    bool flag=false;
  while(whole_product<k)
  {
   for(int i=0;i<10;i++)
   {
       val[i]++;
       whole_product=whole_product/(val[i]-1);
       whole_product=whole_product*val[i];
       if(whole_product>=k)
       {
           flag=true;
           break;
       }

   }
   if(flag)
    break;
  }
  for(int i=0;i<10;i++)
  {
      while(val[i]--)
        cout<<s[i];
  }
  cout<<"\n";
}
