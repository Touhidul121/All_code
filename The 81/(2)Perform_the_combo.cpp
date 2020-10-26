#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
    int n,m;
    string s;
    cin>>n>>m>>s;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        int p;
        cin>>p;
        ++v[p-1];

    }
    for(int i=n-1;i>0;--i)
    {
        v[i-1]=v[i-1]+v[i];
    }
    vector<int> ans(26);

    for(int i=0;i<n;i++)
    {

        ans[s[i]-'a']=ans[s[i]-'a']+v[i];
        ++ans[s[i]-'a'];
    }

    for(int i=0;i<26;i++)
        cout<<ans[i]<<" ";
    cout<<endl;
}
return 0;
}
