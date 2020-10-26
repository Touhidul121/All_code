#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {

    ll n,k,a,b,diff=0,c=0,second_turn=0;
    cin>>n>>k>>a>>b;
    c=n-k*a;
    k=(n-c)/a;
    //cout<<c<<" "<<k<<endl;
    diff=a-b;
    if(c>0)
    {
        second_turn=0;
    }
    else{
    c=-c;

    second_turn=(ll)ceil((c+1)/(diff*1.0));
    }
    //cout<<second_turn<<endl;
    if((second_turn)>k)
        cout<<-1<<"\n";
    else
        cout<<k-second_turn<<"\n";
    }
}
