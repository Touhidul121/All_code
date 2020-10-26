#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    double n,h;
    cin>>n>>h;
    for(double i=1;i<=n-1;i++)
    {
        cout<<fixed<<setprecision(12)<<sqrt(i/n)*h<<" ";
    }
    cout<<"\n";
}
