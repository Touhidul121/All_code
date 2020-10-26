#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        double x;
        cin>>x;
        double p=1.0-(((acos(-1))/2.0) +1)/4.0;
        p=x/p;
        p=sqrt(p);
        cout<<fixed<<setprecision(20)<<p<<"\n";
    }
}
