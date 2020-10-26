#include<bits/stdc++.h>
typedef long long ll;

using namespace std;

int main()
{
    ll n,s;
    cin>>n>>s;
    if(n>=s)
        cout<<1<<"\n";
        else
        {
            if(s%n==0)
            cout<<s/n<<"\n";
            else
                cout<<s/n+1<<"\n";
        }
}
