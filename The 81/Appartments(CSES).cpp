#include<bits/stdc++.h>
using namespace std;

#define inf INT_MAX
typedef long long ll;
int main()
{
    int n,m,k,a,x,y;
    cin>>n>>m>>k;
    vector<int>v1,v2;


    for(int i=0;i<n;i++)
        cin>>a , v1.push_back(a);
    for(int i=0;i<m;i++)
        cin>>a , v2.push_back(a);

    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());

     int i=0,j=0,cnt=0;
     while(i<n && j<m)
     {
         if(v1[i]-k<=v2[j] && v1[i]+k>=v2[j])
            cnt++, i++, j++;
         else if(v1[i]-k>v2[j])
            j++;
         else if(v1[i]+k<v2[j])
            i++;
     }
    cout<<cnt<<"\n";
}
