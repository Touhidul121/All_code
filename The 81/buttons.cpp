#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int sum=0;
sum+=n;
    for(int i=2;i<=n-1;i++)
    {
        sum+=(n-i)*i+1;

    }
    cout<<sum+1<<endl;
}
