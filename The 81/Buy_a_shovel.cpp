#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k, r,i;
    cin>>k>>r;

    i=1;
    while(r!=(k*i)%10&&(k*i)%10!=0)
    {
        i++;
    }
    cout<<i<<endl;
}
