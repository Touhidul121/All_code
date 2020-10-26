#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n,a,ind1=0,ind2=-1,ind3=n;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            cin>>a;

            v.push_back(a);
        }
        reverse(v.begin(),v.end());
        for(int i=0;i<n;i++)
            cout<<v[i]<<" ";
        cout<<"\n";
    }
}
