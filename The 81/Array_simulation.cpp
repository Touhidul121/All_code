#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        int n,m,a,x,y;
        cin>>n>>m;
        vector<int>v;
        for(int i=0;i<n;i++)
            cin>>a, v.push_back(a);
        while(m--)
        {
            char ch;
            cin>>ch;
            if(ch=='S'){
                    cin>>x;
                for(int i=0;i<n;i++)
                v[i]=v[i]+x;
            }
            else if(ch=='M')
            {
                cin>>x;
                for(int i=0;i<n;i++)
                    v[i]=v[i]*x;
            }
            else if(ch=='D')
            {
                cin>>x;
                for(int i=0;i<n;i++)
                    v[i]=v[i]/x;
            }
           else if(ch=='R')
                reverse(v.begin(),v.end());
            else if(ch=='P')
            {
                cin>>x>>y;
                swap(v[x],v[y]);
            }
        }
        cout<<"Case "<<tc<<":\n";
        for(int i=0;i<n-1;i++)
            cout<<v[i]<<" ";
        cout<<v[n-1]<<"\n";

    }
}
