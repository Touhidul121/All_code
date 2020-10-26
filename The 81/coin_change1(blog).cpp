#include<bits/stdc++.h>
using namespace std;

int main()
{
    int coin[3]={2,4,3}; // 2 taka and 4 takar coin
    int way[9]; // 8 taka porjonto banate chai
    memset(way,0,sizeof(way));
    way[0]=1;

    for(int i=0;i<3;i++)
    {
        for(int j=coin[i];j<=8;j++)
        {
            way[j]=way[j]+way[j-coin[i]];
        }
    }
    cout<<"------WAYS--------------"<<"\n";
    int i=0;
    for(auto x:way){
        cout<<i <<" taka ->  "<<x<<"\n";
        i++;
    }
}
