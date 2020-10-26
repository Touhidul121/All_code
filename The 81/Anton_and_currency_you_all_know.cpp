#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,a;
    cin>>n;
    vector<int>v;
    int i=0,ind1,ind2,cnt=0;
    bool f1=false,f2=true;
    int x=n%10;
    while(n>0)
    {
        a=n%10;
        if(a%2==0)
        {
            cnt++;
            f1=true;
            ind1=i;
            if(a<x && f2)
            {
                ind2=i;
                f2=false;
            }
        }
        v.push_back(a);
        i++;
        n=n/10;
    }
    if(f1==false)
        cout<<-1<<"\n";
    if(cnt==1)
    {
        swap(v[ind1],v[v.size()-1]);
        for(int x:v)
            cout<<x;
    }
    else
    {
        if(f2==true)
        {
          swap(v[ind1],v[v.size()-1]);
        for(int x:v)
            cout<<x;
        }
        else
        {
           swap(v[ind2],v[v.size()-1]);
        for(int x:v)
            cout<<x;
        }
    }


}
