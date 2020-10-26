#include<bits/stdc++.h>
#include<string>
using namespace std;
typedef long long ll;
int digit_sum(string s)
{
    int sum=0;
    for(char x:s)
        sum+=x-'0';
    return sum;
}
ll power(ll a,ll n)
{
    ll res=1;
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
        string s1="0";
        s1+=n;
        int x=digit_sum(s);

        ll ans=0;
        int len=s1.size();
        for(int i=len-1;i>=0;i--)
        {

            if(digit_sum(s1)<=x)
                break;
            if(n[i]=='0')
            {
                continue;
            }
            string p=s1.substr(i,len-i);

            ans+=power(10,len-i)-stoll(p);
            //stoll(r);
            s1[i]='0';
            while(i>=1 && s1[i-1]=='9')
            {
              i--;
              s1[i]='0';
            }
            s1[i-1]=char(s[i-1]-'0'+1);

        }

        cout<<ans<<"\n";
    }
}
