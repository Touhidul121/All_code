#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,a,b,k=0,count=0,x;
    double sum=0.0;
    cin>>n>>m>>a>>b;

    double mp=b/(m*1.0);

    if(mp>=a)
    {
        cout<<n*a<<endl;
        return 0;
    }

    else
    {
        x=n-n%m;
cout<<x<<endl;
            sum=mp*x;
            cout<<mp<<endl;
            cout<<sum<<endl;
         sum=(int)ceil(sum);
cout<<sum<<endl;
        if(b<=a&&n%m!=0)
            cout<<sum+b<<endl;

            else
                cout<<(int)sum+(n%m)*a<<endl;
    }
}
