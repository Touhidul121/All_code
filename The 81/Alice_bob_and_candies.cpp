#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--)
    {
        int n,a;
        cin>>n;
        deque<int>dk;
        int moves=0,alice=0,bob=0,sum=0,prev;

        for(int i=0;i<n;i++)
            cin>>a , dk.push_back(a); // input neyar somoy always push_back koro push_front korle jhamela hoy

        prev=0;
        int i=0;

        while(!dk.empty())
        {
            sum=0;
            if(i%2==0)
                {
            while(sum<=prev && !dk.empty())
            {
                sum+=dk.front();
                dk.pop_front();
            }
            alice+=sum;
              }
            else
            {
                while(sum<=prev && !dk.empty())
                {
                    sum+=dk.back();
                    dk.pop_back();
                }
                bob+=sum;
            }
            //cout<<sum<<" ";
            moves++;
            prev=sum;
            i++;

        }
        cout<<moves<<" "<<alice<<" "<<bob<<"\n";

    }
}
