#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,a;

        cin>>n>>x;
        vector<int>v;
        bool f=false;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
            if(x==a)
                f=true;
        }
        int mx=*max_element(v.begin(),v.end());
        if(f)
            cout<<1<<"\n";
        else{
        cout<<max(2,(int)ceil(x/(mx*1.0)))<<"\n";
        }
    }
}
