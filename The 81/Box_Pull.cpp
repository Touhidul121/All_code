#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        ll x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        if(x1==x2 && y1==y2)
            cout<<0<<"\n";
        else if(x1==x2)
            cout<<abs(y2-y1)<<"\n";
        else if(y1==y2)
            cout<<abs(x2-x1)<<"\n";
        else
        {
            cout<<abs(y2-y1)+2+abs(x2-x1)<<"\n";
        }
    }
}
