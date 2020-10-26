#include<bits/stdc++.h>
using namespace std;
typedef long long lli;
lli digit_sum(string s)
{
    lli sum=0;
    for(char x:s)
        sum+=x-'0';
    return sum;
}
lli power(lli a,lli n)
{
    lli res=1;
    while(n)
    {
        if(n&1)
        {
            res=(res*a), n--;
        }
        n=n/2;
        a=a*a;
    }
    return res;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        string n,s;
        cin>>n>>s;

        lli x=stoll(s);
        string s1="0";
        s1+=n;

        int len=s1.size();
        lli ans=0;
        for(int i=len-1;i>=0;i--)
        {

            if(digit_sum(s1)<=x)
                break;
            if(s1[i]=='0')
            {
                continue;
            }

            ans+=power(10,len-i)-stoll(s1.substr(i,len-i));
            s1[i]='0';
            while(i>=1&&s1[i-1]=='9')
            {
                i--;
                s1[i]='0';
            }
            s1[i-1]=(s1[i-1]-'0'+1)+'0';

        }

        cout<<ans<<"\n";
    }
}
