#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll k,i=1;
    cin>>k;
    string str;

    while(str.size()<k)
    {
        str+=to_string(i++);
    }

    cout<<str[k-1]<<endl;
}
