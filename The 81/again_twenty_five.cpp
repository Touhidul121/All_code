#include<bits/stdc++.h>

using namespace std;
int bigmod(int b,int p,int m)
{
    int ret;
    if(p==0)
        return 1;
    else
        if(p%2==0)
    {
        ret=bigmod(b,p/2,m);
        return ((ret%m)*(ret%m))%m;
    }
    else
        return ((b%m)*(bigmod(b,p-1,m))%m)%m;
}

int main()
{
    int n,x;
    cin>>n;

x=bigmod(5,n,100);
if(x==0)
    cout<<00<<endl;
else
    cout<<x<<endl;

}
