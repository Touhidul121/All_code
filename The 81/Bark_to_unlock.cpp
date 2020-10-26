#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,a;
    cin>>s;
    int n,count1=0,count2=0,flag=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
      cin>>a;
      if(s==a)
            flag++;
      if(s[1]==a[0])
        count1++;
      if(s[0]==a[1])
        count2++;
    }
    if(flag>0)
        cout<<"YES"<<endl;
    else if(count1>0&&count2>0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
