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
        string s;
        cin>>s;
        int n=s.size();
        stack<char>stk;

        for(int i=0;i<n;i++)
        {
            if(stk.size()==0){
                stk.push(s[i]);
                continue;
            }

            if((stk.top()=='A' && s[i]=='B') || (stk.top()=='B' && s[i]=='B'))
                stk.pop();
            else stk.push(s[i]);
        }
        cout<<stk.size()<<"\n";
    }
}
