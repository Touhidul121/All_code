#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define maxN 100001
#define neutral_element 2147483647 // 2^31 - 1 karon bitwise and korle jate effect na fele tar joone amder amon sokha nite hobe jar shob bit 1
ll st[4*maxN],operation[4*maxN];

void add(int si,int ss,int se,int qs,int qe,int val)
{
    if(qs>se || qe<ss)
        return;
    if(ss>=qs && se<=qe)
        {
            operation[si]|=val;
            st[si]|=val;
            return;
        }
    int mid=(ss+se)/2;
    add(2*si,ss,mid,qs,qe,val);
    add(2*si+1,mid+1,se,qs,qe,val);
    st[si]=(st[2*si]&st[2*si+1])|operation[si];
}

ll get(int si,int ss,int se,int qs,int qe)
{
    if(qs>se || qe<ss)
        return neutral_element;
    if(ss>=qs && se<=qe)
        return st[si];
    int mid=(ss+se)/2;

    ll m1=get(2*si,ss,mid,qs,qe);
    ll m2=get(2*si+1,mid+1,se,qs,qe);

    return (m1&m2)|operation[si];
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
            cin>>l>>r;
            ll res=get(1,1,n,l+1,r);
            cout<<res<<"\n";
        }
    }
}

