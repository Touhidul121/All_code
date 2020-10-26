#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int n,a;
    cin>>n;

    vector<int>v1,v2(n+1);

    for(int i=0;i<n;i++)
    {
        cin>>a;v1.push_back(a);
    }
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        v2[a]=i;
    }
    vector<int>v3;

    for(int i=0;i<n;i++)
    {
        v3.push_back(v2[v1[i]]);
    }
    priority_queue<int>pq;
    pq.push(v3[0]);
    int ans=0;
    for(int i=1;i<v3.size();i++)
    {
        if(pq.top()>v3[i])ans++;
        pq.push(v3[i]);
    }
    cout<<ans<<"\n";
}
