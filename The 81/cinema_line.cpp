#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n,x,a;
    cin>>n;
    vector<int>v;
ll    sum=0;


    ll change;

    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }

    for(int i=0;i<n;i++)
    {
        x=v[i];
        change=x-25;

        if(change==0)
            sum+=x;
        else
        {
            if(change>sum)
        {
            cout<<"NO"<<endl;
            return 0;
        }
            else
            {
                sum-=change;
                sum+=25;
            }
        }

    }
    cout<<"YES"<<endl;
}
