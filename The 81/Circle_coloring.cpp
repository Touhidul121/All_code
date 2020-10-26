#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[3][n];
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>arr[i][j];
            }
        }
        int count=0;
        bool f=false;

        vector<int>v;
        v.push_back(arr[0][0]);
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<3;j++)
            {
                if(arr[j][i]!=v.back()){
             v.push_back(arr[j][i]);
             break;
                }

            }
            if(v.size()>=n-1)break;
        }
        int a=arr[0][n-1],b=arr[1][n-1],c=arr[2][n-1];

      if(a!=v[0] && a!=v[n-2])
       {
           v.push_back(a);
       }
      else  if(b!=v[0] && b!=v[n-2])
       {
           v.push_back(b);
       }
        else  if(c!=v[0] && c!=v[n-2])
       {
           v.push_back(c);
       }
        for(int x:v)
            cout<<x<<" ";
        cout<<"\n";
    }
}
