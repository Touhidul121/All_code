#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c,a,x,y;
    cin>>n>>c;
    vector<int>v;
    vector<int>pref_sum,suff_sum;

    int lim=0,red=0;
    for(int i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
        }

    for(int i=0;i<n;i++)
    {
        cin>>a;
        pref_sum.push_back(a);
        suff_sum.push_back(a);
    }


   for(int i=1;i<n;i++)
   {
        pref_sum[i]=pref_sum[i]+pref_sum[i-1];

   }

    for(int i=n-2;i>=0;i--)
       {
           suff_sum[i]=suff_sum[i]+suff_sum[i+1];
       }


   for(int i=0;i<n;i++)
   {
       x=v[i]-c*(pref_sum[i]);
       y=v[i]-c*(suff_sum[i]);
       lim+=max(0,x);
       red+=max(0,y);
   }

   if(lim>red)
      cout<<"Limak"<<endl;
   else if(lim==red)
      cout<<"Tie"<<endl;
  else
      cout<<"Radewoosh"<<endl;

}
