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
        string l,r;

            for(int i=1;i<s.size();i++)
            {
                l+=s[i];
            }
            l+=s[0];
r+=s[s.size()-1];
            for(int i=0;i<s.size()-1;i++)
            {
              r+=s[i];
            }

            if(l==r)
                cout<<"YES"<<"\n";
            else
                cout<<"NO"<<"\n";

    }
}
