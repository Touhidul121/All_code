#include<bits/stdc++.h>
using namespace std;
#define maxN 10000
int a[maxN],b[maxN],p;

int getans(int pos,int last,int sum)
{
    if(pos<0)
    {
        return sum;
    }
    static int ans=0,y=0,y1=0,r=0,r1=0,ans1=0,ans2=0;
    if(last==-1)
    {
     int x=max(a[pos],b[pos]);
     ans+=x;
     if(x==a[pos])
            getans(pos-1,0,sum+x);
     else
        x=getans(pos-1,1,sum+x);
    }
    if(last==0){
        y=getans(pos-1,1,sum+b[pos]);

        y1=getans(pos-1,0,sum);
        ans1=max(y,y1);
        ans=max(ans,ans1);
    }
    if(last==1)
    {
        r=getans(pos-1,0,sum+a[pos]);
        r1=getans(pos-1,1,sum);
        ans2=max(r,r1);
        ans=max(ans2,ans);
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        cin>>b[i];

    cout<<getans(n-1,-1,0)<<"\n";

}
