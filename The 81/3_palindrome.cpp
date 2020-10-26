#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s="aabb";
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<s[i%4];
    }
    cout<<"\n";
}
