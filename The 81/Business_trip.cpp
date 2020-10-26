#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,count=0,sum=0,a,flag=0;
    cin>>n;
    vector<int> v;
    for(int i=0;i<12;i++)
    {
        cin>>a;
        v.push_back(a);
    }

    sort(v.begin(),v.end());


    for(int i=11;i>=0;i--)
    {
        sum+=v[i];
count++;
        if(sum>=n)
        {
            flag++;
            break;
        }

    }
    if(flag)
        cout<<count<<endl;
    else
        cout<<-1<<endl;
}
