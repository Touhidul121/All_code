#include<bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    cin>>n;

    int flag=0,flag1=0;
    int ind=0,ind1=0;
    int i=0;
    bool g=true;
    for( i=n.size()-1;i>=0;i--)
    {
        if((n[i]-'0')%2==0&&(n[i]-'0')<n[n.size()-1]-'0')
        {

            ind=i;
            flag++;
        }
        if((n[i]-'0')%2==0&&g)
        {
            flag1++;
            g=false;
            ind1=i;
        }
    }
    if(flag)
    {
        swap(n[n.size()-1],n[ind]);
        cout<<n<<"\n";
    }
    else if(flag1)
    {
        swap(n[n.size()-1],n[ind1]);
        cout<<n<<"\n";
    }
    else
        cout<<-1<<"\n";
}
