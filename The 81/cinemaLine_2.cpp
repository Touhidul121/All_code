#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a;
    cin>>n;

    vector<int>v;
    int c25=0,c50=0;

    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }

    for(int i=0;i<n;i++)
    {
        if(v[i]==25)
            c25++;
        else if(v[i]==50)
        {
            c50++;
            c25--;
        }
        else
        {
            if(c50>0)
            {
                c50--;
                c25--;
            }
        }
    }
}
