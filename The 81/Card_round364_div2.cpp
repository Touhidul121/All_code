#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,sum=0;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        sum+=a;
        v.push_back(a);
    }
    int x=sum/(n/2);

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(v[i]+v[j]==x)
            {
                v[i]=-1;
                v[j]=-1;
                cout<<i+1<<" "<<j+1<<endl;
            }
        }

    }
}
