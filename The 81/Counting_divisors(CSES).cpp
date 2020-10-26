#include<bits/stdc++.h>
using namespace std;
#define maxN 1000001
int cnt[maxN];

void init()
{
    for(int i=1;i<=maxN;i++)
    {
        for(int j=i;j<=maxN;j+=i)
        {
            cnt[j]++;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    init();
    int n;
    cin>>n;
    while(n--)
    {
        int x;
        cin>>x;
        cout<<cnt[x]<<"\n";
    }
}
