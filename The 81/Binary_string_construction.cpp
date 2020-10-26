#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        string s,ans="";
        cin>>s;
        int x;
        cin>>x;
        int n=s.size();

         bool f=false;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
                v.push_back(i);
        }

        if(s[n-1]=='0'&&v.size()==1)
        {
            f=true;
        }
       else
       {
           for(int i=0;i<v.size();i++)
           {
               if(v[i+1]-v[i]<x)
               {
                   cout<<"goes"<<"\n";
                   f=true;break;
               }
           }
       }
        for(int i=0;i<n;i++)
        {
          int ind1=i-x;
          int ind2=i+x;

          if(ind1<0 ||ind2>n-1)
          {

          ans+=s[i];
          }
          else
          {
              char r1=s[ind1];
              char r2=s[ind2];



                  if(r1=='1'||r2=='1')
                    ans+='1';
                  else
                    ans+='0';

          }
        }
        if(f)
            cout<<-1<<"\n";
        else
        cout<<ans<<"\n";
    }
}
