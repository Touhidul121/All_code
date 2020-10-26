#include<bits/stdc++.h>
using namespace std;



int get_div(int n)
{
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)return i;
    }
    return n;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,a;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            int x=get_div(a);
            v.push_back(x);


        }
        map<int,int>mp;
        int val=0;
        for(int i=0;i<v.size();i++)
            {
                if(mp[v[i]]==0)
                {
                    val++;
                    mp[v[i]]=val;
                }
            }
            cout<<val<<"\n";
            for(int i=0;i<v.size();i++)
                cout<<mp[v[i]]<<" ";
        cout<<"\n";
    }
}

