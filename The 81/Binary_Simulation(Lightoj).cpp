#include<bits/stdc++.h>
using namespace std;
#define maxN 100001
int arr[maxN],st[maxN];

void buildtree(int si,int ss,int se)
{
    if(ss==se)
    {
        st[si]=ar[ss];return;
    }
    int mid=(ss+se)/2;
    buildtree(2*si,ss,mid);
    buildtree(2*si+1,mid+1,se);
}

void update(int si,int ss,int se,int qi)
{
    if(ss==se)
    {
        st[si]=1-st[si];return;
    }
    int mid=(ss+se)/2;
    if(qi<=mid)
        update(2*si,ss,mid,qi);
    else
        update(2*si+1,mid+1,se,qi);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
}
