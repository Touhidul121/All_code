#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,x;
    int sum=0,i;
    set<string>st;
    char ch;
   while(getline(cin,s))
   {

     if(s[0]=='+')
    {
        x=s.substr(1,s.size());
        st.insert(x);

    }
     else if(s[0]=='-'){
            x=s.substr(1,s.size());
        st.erase(x);
     }
     else
     {
         int l=0;
         for( i=0;i<s.size();i++)
         {
             if(s[i]==':')
             {
                 break;
             }
         }

         l=s.size()-(i+1);

         sum+=(l*st.size());
         cout<<sum<<"\n";
     }

   }
   cout<<sum<<"\n";
   return 0;
}
