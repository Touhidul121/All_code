#include<bits/stdc++.h>
using namespace std;

bool isValid(int x)
{
    while(x%3==0)
        x=x/3;
    while(x%2==0)
        x=x/2;
    if(x==1)
        return true;
    else
        return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,a;
    cin>>n;

    vector<int>v;
    int gcd=0;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        gcd=__gcd(a,gcd);
        v.push_back(a);
    }

    for(int i=0;i<n;i++)
    {
        int x=(v[i]/gcd);
        if(isValid(x)==false)
        {
          cout<<"NO"<<"\n";
          return 0;
        }
    }
    cout<<"YES"<<"\n";
}
