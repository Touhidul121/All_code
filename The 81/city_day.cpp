#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int n,x,y,a;

    cin>>n>>x>>y;

    vector<int>v1;
int res=0;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v1.push_back(a);
    }
    int flag=0;
    for(int i=0;i<(n-(x+y));i++)
    {
        vector<int>v;
        int countf=0;
        int j=i;
        while(countf<x+y+1)
        {
          v.push_back(v1[j]);

                countf++;
                j++;
        }

       int k=v1[i+x];
       int m=*min_element(v.begin(),v.end());

       if(m==k)
       {
            res=i+x+1;
           flag++;
           break;
       }

    }
    if(flag)
        cout<<res<<"\n";
    else{
        int r=*min_element(v1.begin(),v1.end());
        for(int i=0;i<v1.size();i++)
        {
            if(r==v1[i])
            {
                cout<<i+1<<"\n";
                break;
            }
        }
}

}
