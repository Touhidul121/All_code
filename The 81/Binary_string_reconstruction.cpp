#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int t;
    cin>>t;
    while(t--){
    int n0,n1,n2;
    cin>>n0>>n1>>n2;

    string s="";
    if(n2>0)
    s+=string(n2+1,'1');

    if(n1>0){
    for(int i=0;i<((n1+1)/2);i++)
        s+="10";
    if(n1%2==0)s+='1';
    }

    if(n0>0)
    s+=string(n0+1,'0');

    int cnt0=0,cnt1=0,cnt2=0;
    int x1=0,x2=0;
    for(int i=1;i<s.size();i++)
    {
        if(s[i-1]=='1' && s[i]=='1')
        {
            cnt2++;
            if(cnt2>n2)
            {
                s.erase(s.begin()+i);
                cnt2--;

            }
        }
        else if(s[i-1]=='1'&&s[i]=='0')
        {
            cnt1++;
            if(cnt1>n1)
            {
                s.erase(s.begin()+i);
                cnt1--;
            }
        }
        else if(s[i-1]=='0'&&s[i]=='0')
        {
            cnt0++;
            if(cnt0>n0)
            {
                s.erase(s.begin()+i);
                cnt0--;
            }
        }
    }
    cout<<s<<"\n";
    }
}
