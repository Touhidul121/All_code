#include<bits/stdc++.h>
using namespace std;

vector<int>v(200005);

void getans(int n)
{
    priority_queue<pair<int,pair<int,int>>>pq;
    pq.push({n,{-1,-n}});
    int cnt=1;

    while(!pq.empty())
    {
        int L=-pq.top().second.first;
        int R=-pq.top().second.second;
        pq.pop();
        int mid=(L+R)/2;
        v[mid]=cnt;
        cnt++;

        if(L<mid)
        pq.push({mid-L,{-L,-(mid-1)}});
        if(mid<R)
        pq.push({R-mid,{-(mid+1),-R}});
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        getans(n);

        for(int i=1;i<=n;i++)
            cout<<v[i]<<" ";
        cout<<"\n";
    }
}
