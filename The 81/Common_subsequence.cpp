#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,a;
        cin>>n>>m;
        vector<int>v;
        unordered_set<int>st;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);

        }
        for(int i=0;i<m;i++)
        {
            cin>>a;
            st.insert(a);
        }
        bool f=false;
        int i;
        for( i=0;i<n;i++)
        {
            if(st.find(v[i])!=st.end())
            {

                f=true;
                break;
            }
        }
        if(f)
            cout<<"YES\n"<<1<<" "<<v[i]<<"\n";
        else
            cout<<"NO"<<"\n";
    }
}
