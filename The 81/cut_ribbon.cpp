#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,c;
    cin>>n>>a>>b>>c;

    vector<int>v;
    int z;

    for(int i=0;i<=4000;i++)
    {
        for(int j=0;j<=4000;j++)
        {


            if(n>=a*i+b*j&&(n-(a*i+b*j))%c==0)
                v.push_back(i+j+(n-(a*i+b*j))/c);

        }
    }
    cout<<*max_element(v.begin(),v.end())<<endl;
}
