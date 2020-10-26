#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  while(n--)
  {
      string s;
      cin>>s;
      int sum=0;
      bool f1=false,f2=false,f3=false;
      for(int i=0;i<s.size();i++)
      {
        sum+=(s[i]-'0');
        if((s[i]-'0')==0&&!f1)
            f1=true;
        else if((s[i]-'0')%2==0)
            f2=true;
      }
      if(sum%3==0)
        f3=true;
      if(f1&&f2&&f3)
        cout<<"red"<<"\n";
      else
        cout<<"cyan"<<"\n";
  }
}
