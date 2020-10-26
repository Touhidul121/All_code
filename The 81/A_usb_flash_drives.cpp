#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    int sum=0,a;
   cin>>n>>x;

    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>a;

        v.push_back(a);

    }
    sort(v.rbegin(),v.rend());
    for(int i=0;i<n;i++)
    {
        sum+=v[i];
        if(sum>=x)
        {
            cout<<i+1<<endl;
            return 0;
        }
    }
}
