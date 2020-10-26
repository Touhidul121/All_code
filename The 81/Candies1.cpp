#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,x=1,r;
        cin>>n;
        for(ll i=2;i<30;i++)
        {
            r=pow(2,i)-1;
            if((n%r==0)){
                x=(n/r);
                break;
            }
        }
        cout<<x<<"\n";
    }
}
