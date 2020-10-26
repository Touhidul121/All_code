#include<bits/stdc++.h>
using namespace std;
#define maxN 131073
char s[maxN];

int getcost(int L,int R,char ch)
{
    int cnt=0;
    for(int i=L;i<=R;i++)
    {
        if(s[i]!=ch)cnt++;
    }
    return cnt;
}

int solve(int L,int R,char ch)
{
    if(L==R)
    {
        if(s[L]==ch)return 0;
        else return 1;
    }

    int mid=(L+R)/2;

    return min(getcost(L,mid,ch)+solve(mid+1,R,ch+1),getcost(mid+1,R,ch)+solve(L,mid,ch+1));
}
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
        for(int i=1;i<=n;i++)cin>>s[i];

        cout<<solve(1,n,'a')<<"\n";
    }
}
