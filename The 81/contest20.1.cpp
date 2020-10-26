
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t1;
    cin>>t1;
    while(t1--)
    {

int n1,m1;
cin>>n1>>m1;

for(int i=0;i<n1-1;i++)
{
    for(int j=0;j<m1;j++)
    {
        if(j==0)
            cout<<'B';
        else
            cout<<'W';
    }
    cout<<endl;
}
for(int j=0;j<m1;j++)
    cout<<'B';
    cout<<endl;
    }


}
