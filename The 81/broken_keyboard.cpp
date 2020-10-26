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


        set<char>st;
        //s.push_back('0');

            for(int i=0;i<s.size();i++)
            {
              if(s[i]==s[i+1])
              {

                  i++;
              }
              else
                st.insert(s[i]);
            }

        for(auto x:st)
            cout<<x;
        cout<<"\n";
        st.clear();
    }
}
