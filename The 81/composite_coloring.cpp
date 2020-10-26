#include<bits/stdc++.h>
using namespace std;


int lowest_prime_factor(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
            return i;
    }
}
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int n,a;
       cin>>n;
       vector<int>v,res;
       for(int i=0;i<n;i++)
       {
           cin>>a;
           v.push_back(lowest_prime_factor(a));

       }

       int ans=0;
       for(int i=0;i<n;i++)
       {
           if(v[i]==2)
           {
               res.push_back(1);
               ans=max(ans,1);
           }
           if(v[i]==3)
           {
               res.push_back(2);
               ans=max(ans,2);
           }
           if(v[i]==5)
           {
               res.push_back(3);
               ans=max(ans,3);
           }
           if(v[i]==7)
           {
               res.push_back(4);
               ans=max(ans,4);
           }
           if(v[i]==11)
           {
               res.push_back(5);
               ans=max(ans,5);
           }
           if(v[i]==13)
           {
               res.push_back(6);
               ans=max(ans,6);
           }
           if(v[i]==17)
           {
               res.push_back(7);
               ans=max(ans,7);
           }
           if(v[i]==19)
           {
               res.push_back(8);
               ans=max(ans,8);
           }
           if(v[i]==23)
           {
               res.push_back(9);
               ans=max(ans,9);
           }
           if(v[i]==29)
           {
               res.push_back(10);
               ans=max(ans,10);
           }
           if(v[i]==31)
           {
               res.push_back(11);
               ans=max(ans,11);
           }
       }
       cout<<ans<<"\n";
       for(auto x:res)
        cout<<x<<" ";
        cout<<"\n";
   }
}
