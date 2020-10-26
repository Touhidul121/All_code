#include<bits/stdc++.h>
using namespace std;
int n;
int first_occurance(int x,vector<int>v)
{
    int ind=-1;
    int l=0,h=n-1;
    while(l<=h)
    {

        int mid=(l+h)/2;
        if(v[mid]==x)
            ind=mid , h=mid-1;
        else if(x<v[mid])
            h=mid-1;
        else l=mid+1;
    }
    return ind;
}
int last_occurance(int x,vector<int>v)
{
    int ind=-1;
    int l=0,h=n-1;
    while(l<=h)
    {

        int mid=(l+h)/2;
        if(v[mid]==x)
            ind=mid , l=mid+1;
        else if(x<v[mid])
            h=mid-1;
        else l=mid+1;
    }
    return ind;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int a;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)cin>>a , v.push_back(a);

    for(int i=0;i<n;i++)
    {
        int l=first_occurance(v[i],v);
        int r=last_occurance(v[i],v);
        cout<<"count of "<<v[i]<<" = "<<r-l+1<<"\n";
    }


}

