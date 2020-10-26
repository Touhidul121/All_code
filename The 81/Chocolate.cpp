#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,prev=0;
    cin>>n;

    int count=0;
    bool g=true;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a==1)
            count++;
            if(a==1&&g){
                prev=i;
                g=false;
            }
            v.push_back(a);
    }

    if(count==0)
        cout<<0<<"\n";
    else if(count==1)
        cout<<1<<"\n";
    else
    {
        int next=0,flag=0,cnt=1;
        for(int i=prev;i<n;i++)
        {

         if(v[i]==1){
                next=i;

         }

        if(next!=prev)
         cnt*=next-prev;


         prev=next;
        }
        cout<<cnt<<"\n";
    }
}
