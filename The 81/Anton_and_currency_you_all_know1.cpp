#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string v;
    cin>>v;
    int a;
    int i=0,ind1,ind2,cnt=0;
    bool f1=false,f2=true;
    int x=v[v.size()-1]-'0';

    for(int i=0;i<v.size();i++){
            a=v[i]-'0';
     if(a%2==0)
        {

            f1=true;
            ind1=i;
            if(a<x && f2)
            {
                ind2=i;
                f2=false;
            }
        }
    }
    if(f1==false)
        cout<<-1<<"\n";

    else
    {
        if(f2==true)
        {
        swap(v[ind1],v[v.size()-1]);
        for(char x:v)
            cout<<x;
        }
        else
        {
           swap(v[ind2],v[v.size()-1]);
           for(char x:v)
            cout<<x;
        }
    }


}
