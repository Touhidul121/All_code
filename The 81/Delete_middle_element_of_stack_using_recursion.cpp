#include<bits/stdc++.h>
using namespace std;

void getans(stack<int>&stk,int k)
{
    if(stk.size()==k)
    {
        stk.pop();
        return;
    }
    int tmp=stk.top();
    stk.pop();
    getans(stk,k);
    stk.push(tmp);

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int n,a;
    cin>>n;
    stack<int>stk;

    for(int i=0;i<n;i++)cin>>a , stk.push(a);

    int k=(n/2)+1;

    getans(stk,k);

    while(!stk.empty())
    {
        cout<<stk.top()<<" ";
        stk.pop();
    }
}
