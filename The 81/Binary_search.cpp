#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[]={1,2,2,4,6,8,100};
    Nint l=0,h=sizeof(a)/sizeof(int);
    int k,mid;
    cin>>k;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(a[mid]==k)
        {
            l=mid+1;
            cout<<"successful"<<"\n";
            break;
        }
        if(k>a[mid])
        {
            l=mid+1;
        }
        else
        {
            h=mid-1;
        }

    }
    cout<<l<<"\n";

}
