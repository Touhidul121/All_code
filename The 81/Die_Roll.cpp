#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x,y;
    cin>>x>>y;
    x=max(x,y);
    y=6-x+1;
    int gcd=__gcd(y,6);
    cout<<y/gcd<<"/"<<6/gcd<<"\n";
}
