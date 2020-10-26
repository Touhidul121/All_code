#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;

        bool vis[n]={};
        bool f=false;
        for(int i=0;i<n;i++)
        {
            if(s[i]!='?' && vis[i]==0)
            {
                for(int j=i%k;j<n;j+=k)
                {
                    if(s[j]!='?'&&s[i]!=s[j])
                    {
                        f=true;break;
                    }
                    s[j]=s[i];
                    vis[j]=1;
                }
            }
            if(f)break;
        }
        if(f)cout<<"NO"<<"\n";
        else
        {
           int ones=0,zeros=0,q_mark=0;

           for(int i=0;i<k;i++)
           {
               if(s[i]=='1')ones++;
               else if(s[i]=='0')zeros++;
               else q_mark++;
           }
           if(ones>k/2 || zeros>k/2 || (k/2-ones)+(k/2-zeros)!=q_mark)
            cout<<"NO"<<"\n";
           else cout<<"YES"<<"\n";
        }
    }
}
