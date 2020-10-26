#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t,a;
    cin>>n>>t;

    vector<int>v;

    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    int front1=0,back1=0,m=0,sum=0;

    while(front1!=n)
    {
        sum+=v[front1++];
        while(sum>t)
        {
            sum-=v[back1++];
        }
        m=max(m,front1-back1);
    }
    cout<<m<<endl;
}
