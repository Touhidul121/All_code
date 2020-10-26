#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,x,b,y,flag=0,i;
    cin>>n>>a>>x>>b>>y;

    for( i=1;i<=n;i++)
    {


        if(a==b)
        {
            cout<<"YES"<<endl;
            return 0;
        }
if(a==x||b==y)
{
    flag++;
    break;
}
        if(a==n)
            a=0;
         if(b==1)
            b=n+1;

        a++;
           b--;
    }
    if(flag||i==n+1)
        cout<<"NO"<<endl;
}

