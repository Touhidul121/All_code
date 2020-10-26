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
        int n=s.size();
        int z=0,o=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
                z++;
            else
                o++;
        }
        if(min(o,z)&1)
            cout<<"DA"<<"\n";
        else
            cout<<"NET"<<"\n";
    }
}
