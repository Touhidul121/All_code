#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,k,a,sum=0;
    cin>>n>>k;
    vector<int>v1;
    vector<pair<int,int>>v;

    for(int i=0;i<n;i++)
    {
     cin>>a;
     v.push_back(make_pair(a,i+1));
    }
  sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
        if(v[i].first>k)
            break;
         else
        {

            v1.push_back(v[i].second);
            k-=v[i].first;
            }

        }

cout<<v1.size()<<endl;
    for(int i=0;i<v1.size();i++)
        cout<<v1[i]<<" ";
    cout<<endl;
}
