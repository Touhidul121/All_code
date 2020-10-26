#include<iostream>
using namespace std;


int main()
{
     int t;
    cin>>t;
    while(t--)
    {
        int x1,y1,x2,y2;
        cin>>x1>>y1;
        cin>>x2>>y2;
        int x_diff=x2-x1;
        int y_diff=y2-y1;
cout<<x_diff<<" "<<y_diff;
        if(x_diff==0&&y_diff==0)
            cout<<1<<"\n";
        else
        {
            int r=x_diff+y_diff;

            int ans=1;

            cout<<r<<" "<<x_diff<<"\n";
            for(int i=1;i<=x_diff;i++)
            {
                ans=ans*(r/i);
                --r;
            }
            cout<<ans<<"\n";
        }
    }
}
