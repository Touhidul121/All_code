#include<bits/stdc++.h>
using namespace std;

vector<int> get_div(int n)
{
    vector<int>v;
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            if(i==n/i)
                v.push_back(i);
            else
            {
                v.push_back(i);
                v.push_back(n/i);
            }
        }
    }
    return v;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a;
        cin>>n;
        vector<int>v,hash(1000005);

        for(int i=1;i<=n;i++)
        {
            cin>>a;
            v.push_back(a);
        }
        int mx=0,x;
        for(int i=0;i<n;i++)
        {
            x=v[i];
            vector<int> tmp=get_div(x);

            mx=max(mx,hash[v[i]]);

            for(int j=0;j<tmp.size();j++)
            {
            hash[tmp[j]]++;
            }


        }
        cout<<mx<<"\n";

    }
}
