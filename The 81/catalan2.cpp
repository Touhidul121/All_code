#include<bits/stdc++.h>
using namespace std;

int bin_coff(int n,int k)
{
    int res=1;

    for(int i=0;i<k;i++)
    {
        res*=(n-i);
        res/=(i+1);
    }
    return res;
}

int catalan(int n)
{
    int c=bin_coff(2*n,n);
    //cout<<"Res "<<c<<"\n";
    return c/(n+1);
}

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cout<<catalan(i)<<" ";
}
