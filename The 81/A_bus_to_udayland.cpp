#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,flag=0;
    cin>>n;

    char a[n][5];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(a[i][j]=='|')
                continue;
            else if(a[i][j]=='O'&&a[i][j+1]=='O')
            {
                a[i][j]='+';
                a[i][j+1]='+';
                flag++;

                break;
            }
            else if((a[i][j]=='O'&&a[i][j+1]=='X')||(a[i][j]=='X'&&a[i][j+1]=='O'))
                j++;
        }
        if(flag)
            break;
    }
    if(flag)
    {
cout<<"YES"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<5;j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;
    }
    }
    else
        cout<<"NO"<<endl;

}
