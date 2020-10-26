#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;

    set<string>st;
    int n;
    cin>>n;
    string s,a,b,c;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b>>c;
        st.insert(a);
        st.insert(b);
        st.insert(c);
    }

    int depth=0;
    queue<string>q;
    q.push(s1);
    while(!q.empty())
    {
        int l=q.size();
        depth++;

        while(l--)
        {
            string cur=q.front();
            q.pop();

            for(int i=0;i<cur.size();i++)
            {
                string temp=cur,temp1=cur;
                temp[i]=char((temp[i]-'a'+1)%26 +'a');
                temp1[i]=char((temp1[i]-'a'-1+26)%26 +'a');
                cout<<temp<<"\n";
                cout<<temp1<<"\n";
                if(temp==s2 || temp1==s2)
                {
                    cout<<depth<<"\n";
                    return 0;
                }
                if(st.find(temp)==st.end())
                    q.push(temp);
                if(st.find(temp1)==st.end())
                    q.push(temp1);
                return 0;
            }
            for(int i=0;i<2;i++)
            {
                for(int j=0;j<3;j++)
                {
                   string temp=cur;
                   string temp1=cur;
                   temp[i]=
                }
            }
        }
    }
}
