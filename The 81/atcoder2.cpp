#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,a,b,x,y;
    cin>>n>>a>>b;
    if(a==0)
        cout<<0<<endl;
    else{
            x=n/(a+b);
    y=n%(a+b);
        if(y<a)
            cout<<x*a+y<<endl;
        else
            cout<<x*a+a<<endl;
    }
}
