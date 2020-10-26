#include<bits/stdc++.h>
using namespace std;

int main()
{
    int *p;
    p=new int[10];

    for(int i=0;i<10;i++)
        cin>>p[i];
        cout<<*(p+3)<<endl;
    for(int i=0;i<10;i++)
       cout<<p[i]<<endl;
}
