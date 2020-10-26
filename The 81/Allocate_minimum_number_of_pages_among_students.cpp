#include<bits/stdc++.h>
using namespace std;

vector<int>v;
int n,k;
bool isValid(int max_page)
{
    int student=1;
    int sum=0;

    for(int i=0;i<n;i++)
    {
     sum+=v[i];
     if(sum>max_page)
     {
         student++;
         sum=v[i];
     }
    }
    if(student<=k)return true;
    else return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int a;
    cin>>n;

    for(int i=0;i<n;i++)cin>>a , v.push_back(a);

    int lo=*max_element(v.begin(),v.end());
    int hi=accumulate(v.begin(),v.end(),0);

    cin>>k;
    int res=-1;
    while(lo<=hi)
    {
        int mid=(lo+hi)/2;

        if(isValid(mid))
        {
            res=min(res,mid);
            hi=mid-1;
        }
        else lo=mid+1;
    }
    cout<<res<<"\n";
}
