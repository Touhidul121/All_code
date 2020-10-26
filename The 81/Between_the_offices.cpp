#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    string s;
    cin>>s;

    int f=0, c=0;

    for(int i=0;i<n-1;i++)
    {
        if(s[i]=='S'&&s[i+1]=='F')
            f++;
        else if(s[i]=='F'&&s[i+1]=='S')
            c++;
    }
    if(f>c)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
