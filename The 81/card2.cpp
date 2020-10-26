#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,sum=0,x=0,m=0;
    cin>>n;
    vector<int> v(n+5);

    for(int i=1;i<=n;i++)
    {
      cin>>a;
      sum+=a;
      if(m<a)
        m=a;
      v[a]=i;
    }
cout<<sum<<endl;
    int i=1,j=m;
    cout<<m<<endl;
    x=sum/(n/2);
    cout<<x<<endl;

    while(i<j)
    {
        //cout<<i<<" "<<j<<endl;
        if(i+j>x&&v[i]>0&&v[j]>0)
        {
            j--;
        }
        else if(i+j<x&&v[i]>0&&v[j]>0)
        {
            i++;
        }
        else if(i+j==x&&v[i]>0&&v[j]>0)
            {
                cout<<i<<" "<<j<<endl;
                i++;
                j--;
            }
            else
            {
                i++;
                j--;
            }
    }
}
