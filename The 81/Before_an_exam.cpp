#include<bits/stdc++.h>
using namespace std;

int main()
{
    int d,total_time,mn,mx;
    int sum_mintime=0,sum_maxtime=0,sum=0;

    cin>>d>>total_time;
    vector<int>rem;
    vector<int>ans;
    for(int i=0;i<d;i++)
    {
        cin>>mn>>mx;
        rem.push_back(mx-mn);
        sum+=mn;
        ans.push_back(mn);
        sum_mintime+=mn;
        sum_maxtime+=mx;
    }
    if(sum_mintime<=total_time&&total_time<=sum_maxtime){
        cout<<"YES"<<"\n";
        bool flag=false;
        while(true)
        {
          for(int i=0;i<d;i++)
          {
              if(rem[i]>=1)
              {
                  ans[i]+=1;
                  rem[i]-=1;
                  sum+=1;
              }
              if(sum==total_time)
              {
                  flag=true;
                  break;
              }
          }
          if(flag)
            break;
        }
        for(int i=0;i<d;i++)
            cout<<ans[i]<<" ";
        cout<<"\n";
    }
    else
        cout<<"NO"<<"\n";


}
