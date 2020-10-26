#include<bits/stdc++.h>
using namespace std;

int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);cout.tie(NULL);

        int t;
        cin>>t;
        for(int tc=1;tc<=t;tc++){
        string beginWord,endWord,word;
        cin>>beginWord>>endWord;
        set<string>st;
        int n;
        cin>>n;
        string s1,s2,s3;
        map<string,int>vis;
        vector<string>v1;
        for(int i=0;i<n;i++)
        {
            cin>>s1>>s2>>s3;


            for(int j=0;j<s1.size();j++)
            {
                for(int k=0;k<s2.size();k++)
                {
                    for(int l=0;l<s3.size();l++)
                    {
                        string x="";
                        x+=s1[j];x+=s2[k];x+=s3[l];
                        st.insert(x);
                    }
                }
            }

        }
        cout<<"Case "<<tc<<": ";
        if(st.find(beginWord)!=st.end())
            cout<<-1<<"\n";
        else
        if(beginWord==endWord)
            cout<<0<<"\n";
        else{

        int depth=0,res=-1;
        bool f=false;
        queue<string>q;

        q.push(beginWord);

        while(!q.empty())
        {
            depth++;
            int lsize=q.size();// number of nodes in the current level

            while(lsize--)
            {
                string cur=q.front();

                vis[cur]=1;
                q.pop();
                if(st.find(cur)!=st.end())continue;
                for(int i=0;i<cur.size();i++)
                {
                        string temp=cur,temp1=cur;


                         temp[i]=char((temp[i]-'a'+1)%26 +'a');
                         temp1[i]=char((temp1[i]-'a'-1+26)%26 +'a');

                        if((st.find(temp)==st.end()&&temp==endWord) || (st.find(temp1)==st.end()&&temp1==endWord))
                        {
                            res=depth;
                            f=true;break;
                        }
                        if(temp==cur || temp1==cur)continue;

                        if(st.find(temp)==st.end()&&vis[temp]==0)
                        {
                            q.push(temp);
                            vis[temp]=1;

                        }
                        if(st.find(temp1)==st.end()&&vis[temp1]==0)
                        {
                            q.push(temp1);
                            vis[temp1]=1;

                        }
                    }
                    if(f)break;
                }
                if(f)break;
            }

        cout<<res<<"\n";
        }
        st.clear();
        }
    }


