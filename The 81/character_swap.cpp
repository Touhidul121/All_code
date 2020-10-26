#include<bits/stdc++.h>
using namespace std;

void fun()
{
    int n;
    cin>>n;
    string s,t;
    cin>>s>>t;
    set<pair<char,char>>st;
    int cnt=0;

    for(int i=0;i<n;i++)
    {
        if(s[i]==t[i])
            cnt++;
        else
        {

            st.insert(make_pair(s[i],t[i]));
        }
    }
    if(st.size()==1&&cnt==n-2)
        cout<<"Yes"<<"\n";
    else
        cout<<"No"<<"\n";
}
int main()
{
    int k;
    cin>>k;
    while(k--)
    {
        fun();
    }
}
