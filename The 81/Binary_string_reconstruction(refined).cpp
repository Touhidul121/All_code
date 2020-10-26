#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n0,n1,n2;
        cin>>n0>>n1>>n2;

        if(n2 && !n1 && !n0)
        {
            for(int i=0;i<n2+1;i++)
                cout<<'1';
            cout<<"\n";
            continue;
        }

        for(int i=0;i<n0+1;i++)
            cout<<'0';

        if(!n1)
        {
            cout<<"\n";
            continue;
        }
        for(int i=0;i<n2+1;i++)
            cout<<'1';
        n1--;

        char cur='0';
        while(n1--) // in order to print 0101...
        {
            cout<<cur;
            cur='0'+'1'-cur;
        }
        cout<<"\n";
    }
}
