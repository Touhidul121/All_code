#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a;
    cin>>n;
    int sum=0,count=0;

    int x=n+1;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        sum+=a;
    }

    for(int i=1;i<=5;i++)
    {
        if((sum+i)%x!=1)
        count++;
    }
    cout<<count<<endl;
    return 0;

}
