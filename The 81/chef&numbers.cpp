#include<bits/stdc++.h>
using namespace std;

vector<int>v[10005];
int main()
{
    int t;
    cin>>t;
    while(t--){
 int n;
 cin>>n;
 int a;
 vector<pair<int,int>>v1;
 for(int i=0;i<n;i++)
 {
     cin>>a;
     v[a].push_back(i+1);
 }

 int count=1;

 for(int i=0;i<=10005;i++)
 {
     if(v[i].size()>0)
     {
         count=1;
        int count1=0;
       for(int j=v[i].size()-1;j>=1;j--)
       {

           if(v[i][j]-v[i][j-1]==1)
           {
               while(v[i][j]-v[i][j-1]==1&&j>1)
               {
                   count1++;
                   j--;
               }
               if(count1&1)
                count+=(count1/2)+1;
                else
                    count+=count1/2;
           count1=0;

           }
           else
            count++;

       }

       v1.push_back(make_pair(count,i));
     }
 }

 sort(v1.begin(),v1.end());

 int x=v1[v1.size()-1].first;

 for(int i=0;i<v1.size();i++)
 {
     if(v1[i].first==x)
     {
         cout<<v1[i].second<<"\n";
         break;
     }
 }
 for(int i=0;i<10005;i++)
 {
     for(int j=0;j<v[i].size();j++)
     {
         v[i].clear();
     }
 }
    }

}
