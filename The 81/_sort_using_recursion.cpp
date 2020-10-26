#include<bits/stdc++.h>
using namespace std;

void insert(vector<int>&v1,int val)
{
    if(v1.size()==0 || val>=v1.back())
    {
        v1.push_back(val);return;
    }
    int tmp=v1.back();
    v1.pop_back();
    insert(v1,val);
    v1.push_back(tmp);

}
void _sort(vector<int>&v)
{
    if(v.size()==1)
        return;

    int tmp=v.back();
    v.pop_back();
    _sort(v);
    insert(v,tmp);
}

int main()
{
    int n,a;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
        cin>>a , v.push_back(a);

        _sort(v);
        for(int i=0;i<n;i++)
            cout<<v[i]<<" ";
}
