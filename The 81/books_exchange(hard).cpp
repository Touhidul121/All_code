#include<bits/stdc++.h>
using namespace std;

#define mx 100010





int main()
{
    int t;
    cin>>t;
    while(t--){
       int n,a;

       cin>>n;
       vector<int>v(n);
       vector<int>ans(n);
       vector<int>visited(n);
       for(int i=0;i<n;i++ )
       {
           cin>>v[i];
           --v[i];
       }
       for(int i=0;i<n;i++)
       {

           if(!visited[i])
           {
               vector<int>cur;
               while(!visited[i])
               {
                   cur.push_back(i);
                   visited[i]=true;
                   i=v[i];
               }
               for(auto x:cur)
               {
                   ans[x]=cur.size();
               }
           }
       }
       for(int i=0;i<n;i++)
        cout<<ans[i]<<" ";
       cout<<"\n";
       visited.clear();
}
}
