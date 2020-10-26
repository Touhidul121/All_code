#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a;
    cin>>n;
    priority_queue<int,vector<int>,greater<int>>pq;

    for(int i=0;i<n;i++)
    {
        cin>>a;
        pq.push(a);
    }
    int sum=0;

    while(pq.size()>1)
    {
        int x=pq.top();
        pq.pop();
        int y=pq.top();
        pq.pop();
        sum+=x+y;
        pq.push(x+y);
    }
    cout<<sum<<"\n";
}
