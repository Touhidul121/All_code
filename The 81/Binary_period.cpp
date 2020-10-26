#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t1;
    cin>>t1;
    while(t1--){
    string t;
    cin>>t;
    int x=t.size();
    bool o=true,g=true;
    set<char>s;
    int ind1=-1,ind2=-1;
    for(int i=0;i<x;i++)
    {
        s.insert(t[i]);
        if(t[i]=='0'&&o)
        {
         ind1=i;
         o=false;
        }
        else if(t[i]=='1'&&g)
        {
          ind2=i;
          g=false;
        }
    }
    if(s.size()==1)
    {
     cout<<t<<endl;
    }
    else
    {
        if(ind1<ind2)
            for(int i=0;i<t.size();i++)
            cout<<"01";
        else
            {
                for(int i=0;i<t.size();i++)
                    cout<<"10";
            }
            cout<<"\n";
    }
}
}
