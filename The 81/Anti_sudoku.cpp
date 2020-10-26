#include<bits/stdc++.h>


using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a[10];
        for(int i=0;i<9;i++)
        {

              cin>>a[i];

        }

        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(a[i][j]=='2')
                    a[i][j]='3';
            }
        }

        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                cout<<a[i][j];
            }
            cout<<endl;
        }
    }
}
