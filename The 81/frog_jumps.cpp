#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int ans=0,ind=0,ind1;

        for(int i=0;i<s.size();i++)
        {

            if(s[i]=='R')
            {
                ind1=i+1;
                ans=max(ans,ind1-ind);

                ind=ind1;
            }

        }
        int l=s.size();
        ans=max(ans,l+1-ind);
        cout<<ans<<"\n";
    }
}
