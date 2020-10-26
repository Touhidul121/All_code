#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,ans=0;
    cin>>n>>m;
    ans=(n+m)/3;
    cout<<min(ans,min(m,n))<<"\n";
}
