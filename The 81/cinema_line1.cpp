#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,c25=0,c50=0,x,flag=0;
    cin>>n;
    vector<int>v;

    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }

    for(int i=0;i<n;i++)
    {
        x=v[i];
        if(x==25)
        {
            c25++;
            continue;
        }
        else if(x==50)
        {
            c50++;
            if(c25<1)
            {
                flag++;
            }
            else
                c25--;
        }
        else if(x==100)
        {
            if(c50>0)
            {
                if(c25<1)
                {
                    flag++;
                }
                else
                {
                    c25--;
                    c50--;
                }
            }
            else if(c25<3)
            {
                flag++;
            }
            else
                c25-=3;
        }
    }
    if(flag)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
}
