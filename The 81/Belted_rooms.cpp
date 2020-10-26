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
        int n;
        cin>>n;
        string s;
        cin>>s;
        set<char>st;
        int cnt1=0,cnt2=0,cnt3=0;
        for(int i=0;i<n;i++){
                if(s[i]=='-')cnt1++;
                else if(s[i]=='>')cnt2++;
                else if(s[i]=='<')cnt3++;
                st.insert(s[i]);
        }

        if(st.size()==1 || cnt2==0 || cnt3==0)
            cout<<n<<"\n";
        else
        {
            int j=0;
            int ans=0;
            for(int i=0;i<s.size();i++)
            {
                j++;
                if(s[i]=='-')ans++;
                else
                if(s[(i-1+n)%n]=='-')ans++;
                if(j==n)break;

            }
            cout<<ans<<"\n";
        }
    }
}
