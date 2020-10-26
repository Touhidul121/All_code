#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        multiset<int>st;

        int cnt=0;

        for(int i=0;i<s.size();i++)
        {
            while(s[i]=='1'&&i<s.size())
            {
                cnt++;
                i++;
            }
            st.insert(cnt);
            cnt=0;
        }
        vector<int>v;
        for(auto x:st)
            v.push_back(x);
        reverse(v.begin(),v.end());
        int alice=0;
        for(int i=0;i<v.size();i++)
        {
            if(i%2==0)
                alice+=v[i];
        }
        cout<<alice<<"\n";
    }
}
