#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,res;
    cin>>s;
    int r,x,y;

    for(int i=0;i<s.size();i++)
    {
        x=s[i]-'0';
        y=9-x;
       r=min(x,y);

       if(r==0)
       {
           if(i==0)
            res+=s[i];
           else
            res+=(r+'0');
       }
       else
        res+=(r+'0');
    }
    cout<<res<<"\n";
}
