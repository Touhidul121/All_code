#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
using namespace std;

void fun()
{
    int n,a,b,j,k;
    cin>>n;
    vector<pair<int,int>>v;
    vector<int>v1;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        v.pb(mp(a,b));
    }
    v.pb(mp(0,0));
    sort(v.begin(),v.end());

    int x=0,y=0;
    bool f=false;
    string s;
    for(int i=0;i<n;i++)
    {
        x=v[i+1].first-v[i].first;
        y=v[i+1].second-v[i].second;

        if(x<0||y<0)
        {
            f=true;
            break;
        }
        else
        {
            j=0;
            while(j<x){
                s+="R";
                j++;
            }
            k=0;
            while(k<y)
            {
                s+="U";
                k++;
            }
        }
    }
    if(f)
        cout<<"NO"<<"\n";
        else
        {
            cout<<"YES"<<"\n";
            cout<<s<<"\n";
        }

}
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        fun();
    }
}
