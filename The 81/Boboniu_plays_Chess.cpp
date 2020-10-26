#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n,m,sx,sy;
    cin>>n>>m>>sx>>sy;
    vector<pair<int,int>>v;


    int i,j;
    for(j=sy;j>=1;j--)
    {
      v.push_back({sx,j});
    }
    for(j=sy+1;j<=m;j++)
    v.push_back({sx,j});

    if(sx&1)
    {
        int t=0;

        for(i=sx-1;i>=1;i--)
        {
            if(i==1 && j==m)break;
            if(t%2==0)
            {
                for(j=m;j>=1;j--)
                v.push_back({i,j});
            }
            else
            {
                for(j=1;j<=m;j++)
                v.push_back({i,j});
            }
            t++;
        }
        t=0;
       for(i=sx+1;i<=n;i++)
        {
            if(n-sx%2==0 && (i==n && j==m))break;
            if(n-sx%2!=0 && (i==n && j==1))break;

            if(t%2==0)
            {
                for(j=m;j>=1;j--)
                v.push_back({i,j});
            }
            else
            {
                for(j=1;j<=m;j++)
                v.push_back({i,j});
            }
            t++;
        }

    }

    else
    {
        int t=0;
      for(i=sx-1;i>=1;i--)
        {
            if(i==1 && j==1)break;
            if(t%2==0)
            {
                for(j=m;j>=1;j--)
                v.push_back({i,j});
            }
            else
            {
                for(j=1;j<=m;j++)
                v.push_back({i,j});
            }
            t++;
        }
        t=0;
         for(i=sx+1;i<=n;i++)
        {
            if(n-sx%2==0 && (i==n && j==m))break;
            if(n-sx%2!=0 && (i==n && j==1))break;

            if(t%2!=0)
            {
                for(j=m;j>=1;j--)
                v.push_back({i,j});
            }
            else
            {
                for(j=1;j<=m;j++)
                v.push_back({i,j});
            }
            t++;
        }

    }

    for(pair<int,int> p :v)
        cout<<p.first<<" "<<p.second<<"\n";

}
