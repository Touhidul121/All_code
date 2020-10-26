#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    bool f=false;
    for(char i='a';i<='z';i++)
    {
       for(int j=0;j<n;j++)
       {
           if(s[j]==i)
           {
               s[j]=' ';
               k--;
           }
           if(!k)
           {
               f=true;
               break;

           }
       }
       if(f)break;
    }
    for(int i=0;i<n;i++)
        if(s[i]!=' ')cout<<s[i];cout<<"\n";

}
