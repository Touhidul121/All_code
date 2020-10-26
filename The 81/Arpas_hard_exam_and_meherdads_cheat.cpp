#include<bits/stdc++.h>
using namespace std;

int F(int a,int p,int m)
{
    if(p==0)
        return 1;
    else if(p%2==0)
    {
        int ret=F(a,p/2,m);
        return ((ret%m)*(ret%m))%m;
    }
    else
        return ((a%m)*(F(a,p-1,m)%m))%m;
}
int main()
{
    int n;
    cin>>n;
    cout<<F(1378,n,10)<<endl;
}
