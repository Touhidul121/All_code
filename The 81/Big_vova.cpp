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
        int n,a,x,p,r,ind;
        cin>>n;

        vector<int>v,ans;

        for(int i=0;i<n;i++)cin>>a , v.push_back(a);

        int prev=0;
        for(int i=0;i<n;i++)
        {
            int mx=0;
            for(int j=0;j<n;j++)
            {

                if(v[j]!=-1){
                r=__gcd(prev,v[j]);
                if(mx<r)
                {
                    mx=r;
                    ind=j;
                }
                }
            }
            ans.push_back(v[ind]);
            prev=mx;
            v[ind]=-1;
        }

        for(int x:ans)
            cout<<x<<" ";
            cout<<"\n";
    }
}
