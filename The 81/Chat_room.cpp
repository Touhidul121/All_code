#include<bits/stdc++.h>
using namespace std;

int main()
{
    //----array to check given string word by word and also keeping the sequence
    string c="hello";

    string s;
    cin>>s;

    int count=0,j=0;

    for(int i=0;i<s.size();i++)
    {
        if(s[i]==c[j])
        {
            count++;
            j++;
        }
    }

    if(count==c.size())
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
