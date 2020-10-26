#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>v(n+1);
    for(int i=1;i<=n;i++)
        cin>>v[i];
    int i=1,cnt=0;
    stack<int>stk;
    label:
        if(i==v[i])
        {
           cnt++;
           if(!stk.empty())
           {
              stk.pop();
           }
           i++;
        }
        while(i!=v[i])
        {
            stk.push(v[i]);
            goto label;
        }
        cout<<cnt<<"\n";
}
