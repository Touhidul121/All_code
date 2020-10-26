#include<bits/stdc++.h>
using namespace std;
int catalan(int n)
{
    int cat[n+1];
    cat[0]=cat[1]=1;
    for(int i=2;i<=n;i++)
    {
        cat[i]=0;
        for(int j=1;j<=i;j++)
        {
            cat[i]+=cat[j-1]*cat[i-j];
        }
    }
    return cat[n];
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cout<<catalan(i)<<" ";
}
