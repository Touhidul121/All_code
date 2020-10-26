#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int t;
    cin>>t;
    while(t--){
    int n,x,a;
    cin>>n>>x;
    bool f=false;
    int mx=0;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        mx=max(mx,a);
        if(a==x)f=true;
    }
    if(f)cout<<1<<"\n";
    else
    {
        cout<<max(2,(int)ceil(double(x)/double(mx)))<<"\n";
    }
    }
}
