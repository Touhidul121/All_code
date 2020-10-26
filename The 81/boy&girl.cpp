#include<bits/stdc++.h>
using namespace std;

int main()
{
    int b,g;
        freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    scanf("%d %d",&b,&g);
int y=g;
int r=b;

    if(r>=y)
    {
        int x=y;
        while(y--)
        {
            cout<<'B';
            cout<<'G';
        }

        int rest=r-x;

        while(rest--)
        {
            cout<<'B';
        }
        cout<<endl;
    }
    else if(y>=r)
    {
        int x=r;
        while(r--)
        {
            cout<<'G';
            cout<<'B';
        }
        int rest2=y-x;
        while(rest2--)
            cout<<'G';
        cout<<endl;
    }
}
