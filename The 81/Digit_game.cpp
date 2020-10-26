#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;

        int ev=0,odd=0;
        for(int i=0;i<n;i++)
        {
            if(i%2==0){
            if((s[i]-'0')%2==1)odd++;
            }
            else
            {
                if((s[i]-'0')%2==0)ev++;
            }

        }
        if(n&1)
        {
            if(odd)cout<<1<<"\n";
            else cout<<2<<"\n";
        }
        else
        {
            if(ev)cout<<2<<"\n";
            else cout<<1<<"\n";
        }
    }
}
