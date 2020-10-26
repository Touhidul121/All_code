#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,count=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='+')
            count++;
            else
            {
                count--;
                count=max(0,count);
            }
    }

        cout<<max(0,count)<<endl;
}
