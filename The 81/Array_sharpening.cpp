#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a;
        cin>>n;
        vector<int>v;


        for(int i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
        }
        int i=0,x1=0,x2=0;
        while(v[i]>=i && i<n)
        {
            i++;
            x1++;
        }
        i=n-1;
        while(v[i]>=(n-1-i)&&i>=0)
        {
            i--;
            x2++;
        }
        if(x1>=x2)
            cout<<"Yes"<<"\n";
        else
            cout<<"No"<<"\n";
    }
}
