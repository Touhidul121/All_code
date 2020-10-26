#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;
cin>>t;
while(t--)
{
    int n,k,a;
    cin>>n>>k;
    vector<int>v1,v2;

    for(int i=0;i<n;i++)
    {
        cin>>a;
        v1.push_back(a);
v2.push_back(a);
    }

vector<int>v3,v4;
bool flag=true;

sort(v2.begin(),v2.end());

for(int i=1;i<=k;i++)
{
    for(int j=i-1;j<n;j+=k)
    {
        v3.push_back(v1[j]);

    }
sort(v3.begin(),v3.end());
int l=0;
for(int j=i-1;j<n;j+=k)
{
    v1[j]=v3[l];
    l++;
    if(l==v3.size())
        break;
}
}

    if(v1==v2)
        cout<<"yes"<<"\n";
    else
        cout<<"no"<<"\n";
    }
}

