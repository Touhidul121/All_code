#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,n;
        cin>>a>>b>>n;
        if(a>b)
            swap(a,b);
        ll cnt=0;
int   k=0;
        while(true)
        {
          if(k%2==0)
                a+=b;
          else
            b+=a;

          cnt++;
          k++;
          if(a>n||b>n)
            break;
        }
cout<<cnt<<"\n";
    }
}
