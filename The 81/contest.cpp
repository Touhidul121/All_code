#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;

    cin>>a>>b>>c>>d;

    int t1,t2;
    t1=max((3*a)/10,a-(a/250)*c);
    t2=max((3*b)/10,b-(b/250)*d);

    if(t1>t2)
        cout<<"Misha"<<endl;
    else if(t1<t2)
        cout<<"Vasya"<<endl;
    else
        cout<<"Tie"<<endl;
    return 0;
}
