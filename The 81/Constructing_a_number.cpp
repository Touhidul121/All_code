#include<bits/stdc++.h>
using namespace std;
int sum_of_digits(int n)
{
    if(n==0)
        return 0;
    return n%10+sum_of_digits(n/10);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
     int n,ans=0,a;
     cin>>n;
     for(int i=0;i<n;i++)
     {
         cin>>a;
         ans+=sum_of_digits(a);
     }
     if(ans%3==0)
        cout<<"Yes"<<"\n";
     else
        cout<<"No"<<"\n";
    }
}
