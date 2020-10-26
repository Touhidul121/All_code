#include<bits/stdc++.h>
using namespace std;

int main()
{
    char ch='a';
    for(int i=0;i<26;i++)
    {
        cout<<char((ch-'a'+1)%26 +'a')<<"\n";
        cout<<char((ch-'a'-1+26)%26 +'a')<<"\n";
        ch++;
    }
}
