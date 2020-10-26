#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int n,a;
    cin>>n;
    vector<int>v1,v2,v3;
    for(int i=0;i<n;i++)cin>>a , v1.push_back(a);
    for(int i=0;i<n;i++)cin>>a , v2.push_back(a),v3.push_back(a);
    bool f1=false;
    for(int i=0;i<n;i++)
    {
        if(v1[i]==v2[i])
        {
            f1=true;break;
        }
    }
    if(!f1)
    {
        cout<<"Yes"<<"\n";
        for(int x:v2)cout<<x<<" ";
        cout<<"\n";
    }
    else{
    if(n%2==0)
    {
        for(int i=0;i<n/2;i++)
            swap(v2[i],v2[n/2+i]);

        bool f=false;
        for(int i=0;i<n;i++)
            if(v1[i]==v2[i])
        {
            f=true;break;
        }
        if(f)cout<<"No"<<"\n";
        else
        {
            cout<<"Yes"<<"\n";
            for(int x:v2)cout<<x<<" ";cout<<"\n";
        }
    }
    else
    {
        bool f=false;
        for(int i=0;i<n/2;i++)
            swap(v2[i],v2[(n+1)/2+i]);
       int x=v2[n/2];
        for(int i=n/2;i<n;i++)
        {
          v2[i]=v2[i+1];
        }
        v2[n-1]=x;
        for(int i=0;i<n;i++)
        {
            if(v1[i]==v2[i])
            {
                f=true;break;
            }
        }

            if(f)
                cout<<"No"<<"\n";
            else
            {
                cout<<"Yes"<<"\n";
                for(int x:v2)
                    cout<<x<<" ";
                        cout<<"\n";
            }


    }
    }
}

