#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b;
        cin>>n>>a>>b;

        string s;
        for(int i=0;i<a-b+1;i++)
        {
           s+='a';
        }

        for(int i=0;i<b-1;i++)
        {
            s+='a'+1+i;
        }

        for(int i=0;i<n;i++)
        {
            cout<<s[i%a];
        }
        cout<<endl;
    }
}
