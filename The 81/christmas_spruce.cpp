#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> p(n),degree(n);
//---------p array to take input & degree array to count degree-------
    for(int i=1;i<n;i++)
    {
        cin>>p[i];

        p[i]--;
        degree[p[i]]++;
    }
//---leafs array to count leaf nodes ----//
    vector<int> leafs(n);

    for(int i=0;i<n;i++)
    {
        if(degree[i]==0)//leaf node has degree 0
        {

            leafs[p[i]]++;// leaf of p[i]+1 th node

        }
    }


    for(int i=0;i<n;i++)
    {
        if(degree[i]>0&&leafs[i]<3)
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}
