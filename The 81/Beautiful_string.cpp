#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
    string a="abc";
    string s;
    cin>>s;

    bool flag=false;
    for(int i=0;i<s.size()-1;i++)
    {
        if(s[i]!='?'){
        if(s[i]==s[i+1])
        {
            flag=true;
            break;
        }
        }
    }
    if(flag)
        cout<<-1<<"\n";
    else
    {
        char x,prev,next;
        for(int i=0;i<s.size();i++)
        {
          if(s[i]=='?')
          {
              if(i==0)
                prev='d';
              else
                prev=s[i-1];
              if(i==s.size()-1)
                next='e';
              else
                next=s[i+1];

              for(int j=0;j<a.size();j++)
              {
                  if(a[j]!=prev&&a[j]!=next){
                    x=a[j];
                    break;
                  }
              }

              s[i]=x;
          }
        }
        cout<<s<<"\n";
    }
}
}
