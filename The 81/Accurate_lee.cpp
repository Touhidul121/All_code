#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int i,j=n-1;

        vector<char>v1,v2;
        int cnt1=0,cnt2=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
                cnt1++;
            else
                cnt2++;
        }
        if(cnt1==0 || cnt2==0)
            cout<<s<<"\n";
        else{
                i=0;
        while(s[i]=='0')
        {
            v1.push_back(s[i]);
            i++;
        }


        for(;j>=i;j--)
        {
            if(s[j]=='1')
                v2.push_back(s[j]);
            else
                break;

        }

        if(i>j)
        {
            for(auto x:v1)
                cout<<x;
            for(int k=v2.size()-1;k>=0;k--)
                cout<<v2[k];
            cout<<"\n";
        }
        else
        {
            for(auto x:v1)
                cout<<x;
            cout<<"0";
            for(int k=v2.size()-1;k>=0;k--)
                cout<<v2[k];
            cout<<"\n";
        }
        }

    }
}
