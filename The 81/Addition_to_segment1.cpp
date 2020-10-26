#include<bits/stdc++.h>
using namespace std;
#define maxN 100001
typedef long long ll;
ll st[4*maxN];

void add(int si,int ss,int se,int qs,int qe,int val)
{
    if(qs>se || qe<ss)
        return;
    if(ss>=qs && se<=qe)
        {
            st[si]+=val;return;
        }
    int mid=(ss+se)/2;
    add(2*si,ss,mid,qs,qe,val);
    add(2*si+1,mid+1,se,qs,qe,val);
}

ll get(int si,int ss,int se,int qi )
{
    if(ss==se)
        return st[si];
    int mid=(ss+se)/2;

    ll res;
    if(qi<=mid)
        res=get(2*si,ss,mid,qi);
    else
        res=get(2*si+1,mid+1,se,qi);
    return res+st[si];
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int n,q,l,r,v,type;
    cin>>n>>q;
    while(q--)
    {
        cin>>type;
        if(type==1)
        {
            cin>>l>>r>>v;
            add(1,1,n,l+1,r,v);
        }
        else
        {
            cin>>l;
            ll res=get(1,1,n,l+1);
            cout<<res<<"\n";
        }
    }
}
