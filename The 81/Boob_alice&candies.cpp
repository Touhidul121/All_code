#include<bits/stdc++.h>
using namespace std;

void fun()
{
    int n,a;
    cin>>n;
    vector<int>v;

    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    int i=0,j=n-1,k=1,sum1=0,count=0,sum2=0,dsum1=0,dsum2=0,alice=0,bob=0;
    while(i<=j)
    {
        if(k&1){
                sum1=0;
               while(sum1<=dsum2&&i<=j)
               {
                   sum1+=v[i];
                   i++;
               }
               alice+=sum1;
               dsum1=sum1;
               }
               else
               {
                   sum2=0;
                   while(sum2<=dsum1&&i<=j)
                   {
                       sum2+=v[j];
                       j--;
                   }
                   bob+=sum2;
                   dsum2=sum2;
               }
               count++;
k++;
               }
               cout<<count<<" "<<alice<<" "<<bob<<"\n";
    }


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        fun();
    }
}
