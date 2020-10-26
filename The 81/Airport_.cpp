#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,a,count=0,count1=0,x,flag=0,flag1=0;
    cin>>n>>m;

    vector<int> v,v1;

    for(int i=0;i<m;i++)
    {
      cin>>a;
      v.push_back(a);
      //v1.push_back(a);
    }

    sort(v.rbegin(),v.rend());
  //v.push_back(0);
    int mx=0,mn=0;


    for(int i=m-1;i>=0;i--)
    {
        x=v[i];


        while(x--)
        {

            mn+=x+1;
            count1++;
            if(count1==n)
            {
                flag1++;
                break;
            }
        }
        if(flag1)
            break;
    }

int k=0;
m=0;
while(k<n)
   {
       mx+=v[0]--;
       sort(v.rbegin(),v.rend());
       k++;
   }
    cout<<mx<<" "<<mn<<endl;
}
