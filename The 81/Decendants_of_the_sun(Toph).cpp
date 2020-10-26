#include<bits/stdc++.h>
using namespace std;

bool isVowel(char ch)
{
    if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
        return true;
    else
        return false;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s1,s2;
        cin>>s1>>s2;
        int cnt1=0,cnt2=0;

        for(int i=0;i<n;i++)
            if(isVowel(s1[i]))cnt1++;

        for(int i=0;i<n;i++)
            if(isVowel(s2[i]))cnt2++;

        if(cnt1>cnt2)
            cout<<"First String"<<"\n";
        else if(cnt2>cnt1)
            cout<<"Second String"<<"\n";
        else
            cout<<"Equal"<<"\n";

    }
}
