#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int left=INT_MAX,right=0;
    int a,b;
    vector<pair<int,int>>v;

    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        if(b>right)
            right=b;
        if(left>a)
        {
          left=a;
        }
        v.push_back(make_pair(a,b));
    }

    for(int i=0;i<v.size();i++)
    {
        if(v[i].first<=left&&v[i].second>=right)
        {

            cout<<i+1<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
}
