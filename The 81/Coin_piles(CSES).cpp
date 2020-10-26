#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if(a<b)
            swap(a,b);
        long long sum=(a+b);

        if(sum%3==0 && min(a,b)>=max(a,b)/2)
        cout<<"YES"<<"\n";
        else
            cout<<"NO"<<"\n";
    }
}
