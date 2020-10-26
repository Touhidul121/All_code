#include<bits/stdc++.h>
using namespace std;

int main()
{
    double with,init;
    cin>>with>>init;
    int x=(int)with;

    if(with>(init-0.5)||x%5!=0)
        cout<<fixed<<setprecision(2)<<init<<"\n";
    else
    {
       cout<<fixed<<setprecision(2)<<(init-with-0.5)<<"\n";
    }
}
