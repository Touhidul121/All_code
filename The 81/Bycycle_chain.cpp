#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,m1=0,a,count=0,b,x,y;
    cin>>n;
    vector<int> v,v1;
    for(int i=0;i<n;i++)
    {
      cin>>a;
      v.push_back(a);
    }
cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>a;
        v1.push_back(a);
    }

    for(int i=0;i<n;i++)
    {
        a=v[i];
        for(int j=0;j<m;j++)
        {
            b=v1[j];
            x=(int)ceil(b/(a*1.0));
            y=(int)floor(b/(a*1.0));

            if(x==y)
            {
                if(m1<x)
                    m1=x;
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        a=v[i];
        for(int j=0;j<m;j++)
        {
            b=v1[j];
            x=(int)ceil(b/(a*1.0));
            y=(int)floor(b/(a*1.0));

            if(x==y&&x==m1)
            {


                count++;
            }
        }
    }
    cout<<count<<endl;
}
