#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,t,a,b;
    cin>>n>>k;
    map<int,pair<int,int>>mp;

    for(int i=0;i<n;i++)
    {
        cin>>t>>a>>b;
        mp.make_pair(t,{a,b});
    }
    int time=0,ans=0;
    sort(v.begin(),v.end());
    for(auto x:mp)
    {
        if(mp.second.second==1 && x.second.first==1){
            ans++;
        time+x.first;
        }
    }
    if(ans<k)
        cout<<-1<<"\n";
    else
        cout<<time<<"\n";
    }
}
