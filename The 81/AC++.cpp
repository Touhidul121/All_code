#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll k,d;
    ll ans;
    ans=(ll)ceil(sqrt(k)/3.0);
    string s="codeforces";
    vector<char>v;
    j=0;
    while(s<k)
    {
        d=s;
        for(int i=0;i<ans;i++)
            v.push_back(s[j]);
            j--;
            s-=(j+2)*(j+1)*2;
    }
    for(auto)
}
