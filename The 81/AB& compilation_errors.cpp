#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,x=0,y=0,c,i;
    cin>>n;
    vector<int>v1,v2;

    for(int i=0;i<n;i++)
    {
        cin>>a;
        v1.push_back(a);
    }

    for( i=0;i<n-1;i++)
    {
        cin>>a;
        v2.push_back(a);
        c=v1[i]^a;
        x=x^c;

    }
    x=x^v1[i];

    for( i=0;i<n-2;i++)
    {
        cin>>a;
        c=v2[i]^a;
        y=y^c;
    }
    y=y^v2[i];
    cout<<x<<endl;
    cout<<y<<endl;

}
