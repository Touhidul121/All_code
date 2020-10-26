#include<bits/stdc++.h>
using namespace std;

int main()
{
    int f;
    cin>>f;
    while(f--)
    {
      int n1,a1,b1;
      cin>>n1>>a1>>b1;
      string str;
      int c1=0;
      if(a1==1)
      {
          for(char i='a';;i++)
      {
          if(c1==n1)
            break;
          str+=i;
          c1++;
      }
      }
      else
      {
          for(char i='a';;i++)
      {
          if(c1==b1)
            break;
          str+=i;
          c1++;
      }
      string tab=str;
      int r=n1/b1-1;
      for(int i=0;i<r;i++)
      str+=tab;
      int rest=n1-str.size();
      //cout<<rest<<" "<<s.size()<<endl;
      for(int i=0;i<b1;i++)
      {
          if(str.size()==n1)
            break;
          str+=str[i];
      }
      }
      cout<<str<<endl;
    }
}

