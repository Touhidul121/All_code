#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    vector<string>st;
    sort(s.begin(),s.end());
    do
    {
    st.push_back(s);
    }while(next_permutation(s.begin(),s.end()));
      cout<<st.size()<<"\n";
    for(string s:st)
        cout<<s<<"\n";
}
