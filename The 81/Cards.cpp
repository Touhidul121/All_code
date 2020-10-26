#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int> v1,v2;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='z')
            v2.push_back(0);
        if(s[i]=='n')
            v1.push_back(1);
    }
    for(int i=0;i<v1.size();i++)
        cout<<v1[i]<<" ";

    for(int i=0;i<v2.size();i++)
        cout<<v2[i]<<" ";
    cout<<endl;
    return 0;
}
