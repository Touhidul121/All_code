#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    vector<string>v;
    v.push_back("Danil");
    v.push_back("Olya");
    v.push_back("Slava");
    v.push_back("Ann");
    v.push_back("Nikita");

    int cnt=0;
    for(int j=0;j<v.size();j++)
    {
        if(v[j].size()<=s.size()){
        for(int i=0;i<=s.size()-v[j].size();i++)
        {

            string x=s.substr(i,v[j].size());
            if(x==v[j])
                cnt++;
        }
        }
    }
    if(cnt==1)
        cout<<"YES"<<"\n";
    else
        cout<<"NO"<<"\n";
}
