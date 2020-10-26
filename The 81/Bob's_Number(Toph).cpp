#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

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
        deque<int>dk;


        for(int i=0;i<n;i++)
        {
            dk.push_back(s[i]-'0');

        }
        for(int i=0;i<n;i++)
        {
            int x=dk.back();
            dk.pop_back();
            dk.push_front(x);
        }
        ll x=0;
        int i=0;
        while(!dk.empty())
        {
            x+=dk.back()*pow(2,i);
            dk.pop_back();
            i++;
        }
        if(x&1)
            cout<<"odd"<<"\n";
        else cout<<"even"<<"\n";
    }
}
