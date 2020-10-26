#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    string s;
    cin>>s;

    vector<char>v;
    set<char>st;

    for(int i=0;i<s.size();i++)
    {
        v.push_back(s[i]);
        st.insert(s[i]);
    }




int same=n-st.size();
int rest=26-st.size();
    if(rest<same)
        cout<<"-1"<<"\n";
    else
        cout<<same<<"\n";
}
