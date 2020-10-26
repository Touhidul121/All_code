#include<bits/stdc++.h>
using namespace std;
int n;
int arr[100001];

void solve(int pos,int w,vector<int>v)
{
    if(pos<0)
    {
      return;
    }
    if(w==0)
    {
        for(int i=0;i<v.size();i++)
            cout<<v[i]<<" ";cout<<"\n";
        return;
    }
    if(arr[pos]<=w)
    {
         v.push_back(arr[pos]);
         solve(pos,w-arr[pos],v);
         v.pop_back();
         solve(pos-1,w,v);
    }
    else return solve(pos-1,w,v);
}
int main()
{
    int a,w;
    cin>>n>>w;
    for(int i=0;i<n;i++)cin>>arr[i];
    vector<int>v;
    solve(n-1,w,v);
}
