#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int t,r=0;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        r++;
        cin>>a>>b>>c;
        cout<<"Case "<<r<<": ";
        if(c%__gcd(a,b)==0)
            cout<<"Yes"<<"\n";
        else cout<<"No"<<"\n";
    }
}
