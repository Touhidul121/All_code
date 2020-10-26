#include<bits/stdc++.h>
using namespace std;


bool comp(pair<int,int> a,pair<int,int> b)
{
    if(a.second<b.second)
        return true;
    else if(a.second==b.second)
        return a.first<b.first;
    else
        return false;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int n,a,b;
    cin>>n;
    pair<int,int> v[n];
    for(int i=0;i<n;i++)
    {
        cin>>v[i].first>>v[i].second;
    }

    sort(v,v+n,comp);
    cout<<"-----OUTPUT-----"<<"\n";
    for(int i=0;i<n;i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<"\n";
    }
}
