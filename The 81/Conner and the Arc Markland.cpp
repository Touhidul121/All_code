#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,s,k,a;
        cin>>n>>s>>k;
        vector<int>v;
        for(ll i=0;i<k;i++)
        {
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());


        ll ans1=INT_MAX,ans2=INT_MAX;
        for(int i=s;i<=n;i++)
        {
           if(!binary_search(v.begin(),v.end(),i))
           {
               ans1=i-s;
               break;
           }
        }

        for(int i=s;i>=1;i--)
        {

           if(!binary_search(v.begin(),v.end(),i))
           {
               ans2=s-i;
               break;
           }

           }


        if(ans1==INT_MAX)
            cout<<ans2<<"\n";
        else if(ans2==INT_MAX)
            cout<<ans1<<"\n";
        else
        cout<<min(ans1,ans2)<<"\n";

    }
}
