#include<bits/stdc++.h>
using namespace std;

int main()
{
    int d,total_time,mn,mx;
    int sum_mintime=0,sum_maxtime=0,sum=0;

    cin>>d>>total_time;

    vector<int>ans,a,b;
    for(int i=0;i<d;i++)
    {
        cin>>mn>>mx;
        a.push_back(mn);
        b.push_back(mx);

        sum_mintime+=mn;
        sum_maxtime+=mx;
    }
    if(sum_mintime<=total_time&&total_time<=sum_maxtime){
        cout<<"YES"<<"\n";
        int diff=0;
        for(int i=0;i<d;i++)
        {
           diff=total_time-sum_mintime;
           ans.push_back(min(a[i]+diff,b[i]));/* stock = total-sum_min_time,we will have to add those with every
                                                  ans[i] so that sum of them becomes equal to total_time. Amra ekahe min of
                                                   (ans[i]+diff,b[i]) nicchi karon ans[i] er value b[i] er cheye boro hote pare na
                                                       ekhane amder kaj holo diff use kore kore sum_mintime re total er soman banano
                                                      jodi a[i]+diff>b[i] hoy tao kintu diff use hoyece karon (jodi maxtime>min_time )hoy
                                                      tobe ekhane diff=b[i]-a[i].Tahole prottekbar total time-=min(ans[i]+diff,b[i])
                                                         and sum_mintime-=a[i].karon sum_mintime hocce min_value er somosti .amra proteker
                                                 kache akbar kore jacchi.akbar a[i] consider kora hoye gale ta next time min_sum a obodan rakhbe na
                                                 */

           total_time-=min(a[i]+diff,b[i]);
           sum_mintime-=a[i];
        }
        for(int i=0;i<d;i++)
            cout<<ans[i]<<" ";
        cout<<"\n";
    }
    else
        cout<<"NO"<<"\n";
}
