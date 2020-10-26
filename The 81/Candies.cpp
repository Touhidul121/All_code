#include<bits/stdc++.h>
typedef long long ll;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,x,y;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        for(int k=2;k<=n;k++)
        {
            y=pow(2,k)-1;
            if(n%y==0){
            x=n/y;
            break;
            }

        }
        cout<<x<<endl;
    }
}
