#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,res1=0,res2=0,res3=0,sum=0,x,y;
    cin>>n;
    string s,s1;
cin>>s>>s1;
    for(int i=0;i<n;i++)
    {
        x=s[i]-'0';
        y=s1[i]-'0';
        res1=abs(x-y);
        res2=1+9-x+y-0;
        res3=1+(x-0)+9-y;
        sum+=min(res1,min(res3,res2));
    }
    cout<<sum<<endl;
}
