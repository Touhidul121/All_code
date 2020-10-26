#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int>ans;
        int mx=0,o=0,z=0;

        for(int i=0;i<n;i++)
        {
           if(s[i]=='1')
           {
               o++;
               if(z)
                ans.push_back(z),z--;
               else
                ans.push_back(o);
           }
           else
           {
               z++;
               if(o)o--;
               ans.push_back(z);
           }
           mx=max(mx,max(o,z));
        }
        cout<<mx<<"\n";
        for(int i=0;i<ans.size();i++)
            cout<<ans[i]<<" ";
        cout<<"\n";
    }
}
