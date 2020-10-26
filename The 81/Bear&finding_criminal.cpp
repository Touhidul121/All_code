#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,sum=0,x,y,c;
    cin>>n>>a;
    vector<int>v;

    for(int i=0;i<n;i++)
    {
        cin>>c;
        v.push_back(c);
        sum+=c;
    }


    for(int i=0;i<a-1;i++)
    {
        if(v[i]+v[a-1+a-1-i]==1&&2*a-2-i<n)
            sum--;
    }
    cout<<sum<<"\n";
}
