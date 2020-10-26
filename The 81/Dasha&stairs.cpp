#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ev,odd;
    cin>>ev>>odd;
    // in the problem statement (1<=l<=r) l=prothom shirir number,r=last shirir number
    //tai ev==0 and odd==0 hoile no least possible interval[1,1] odd=1,ev=0
    if(ev==0&&odd==0)
        cout<<"NO"<<"\n";
    else
    if(abs(ev-odd)<=1)
        cout<<"YES"<<"\n";
    else
        cout<<"NO"<<"\n";
}
