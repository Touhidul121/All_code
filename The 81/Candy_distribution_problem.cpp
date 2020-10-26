#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,a;
    cin>>n;
    vector<int>v;

    for(int i=0;i<n;i++)
        cin>>a , v.push_back(a);
    vector<int>left(n,1),right(n,1);

    for(int i=1;i<n;i++)
    {
        if(v[i]>v[i-1])
            left[i]=left[i-1]+1;
    }
    for(int i=n-2;i>=0;i--)
    {
        if(v[i]>v[i+1])
            right[i]=right[i+1]+1;
    }

    for(int i=0;i<n;i++)
    {
        cout<<max(left[i],right[i])<<" ";
    }
    cout<<"\n";
}
