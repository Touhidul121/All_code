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
        int n,a;
        cin>>n;
        map<int,int>mp;

        for(int i=0;i<n;i++)
        {
            cin>>a;
            mp[a]++;
        }
        int size=0;
        map<int,int>vis;
        vector<int>v;
        for(auto it=mp.rbegin();it!=mp.rend();it++)
        {
            v.push_back(it->second);
        }
        sort(v.rbegin(),v.rend());

       int last=0;
        vector<int>ans;
        for(int i=0;i<v.size();i++)
        {

            if(ans.size()==0)
            {
              ans.push_back(v[i]);
            }
            else if(v[i]>=ans.back())
            {
                if(ans.back()-1>0)
                    ans.push_back(ans.back()-1);
            }
            else
                ans.push_back(v[i]);


        }
        for(int x:ans)
            size+=x;
        cout<<size<<"\n";
    }
}
