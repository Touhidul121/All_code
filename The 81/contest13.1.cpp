#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,count1=0,count2=0,count3=0;
    cin>>n;
    string s;
    cin>>s;
    stack<char> st;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='(')
            count1++;
        else if(s[i]==')')
            count2++;
    }
    if(count1!=count2)
        cout<<-1<<endl;
        else
        {
           for(int i=0;i<n;i++)
           {
               if(s[i]=='('){
                    st.push(s[i]);
               continue;
               }
                if(!st.empty()&&s[i]==')')
               {

                   st.pop();
               }
           }


        if(st.empty())
            cout<<0<<endl;
    else
    {
        for(int i=0;i<n-1;i++)
        {
            if(s[i]=='('&&s[i+1]==')')
                        count3+=2;
        }
        cout<<n-count3<<endl;
    }
        }
}
