#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int ar[1001];

ll dp[11][100][2];

vector<int>v;

void getsum(int pos,int n,int x,bool flag)
{
    if(pos>n){
        for(int i=1;i<=v.size();i++)
            cout<<v[i]<<" ";
        cout<<"\n";
      v.clear();
    }



    int limit=9;
    if(!flag)limit=ar[pos];



    for(int i=0;i<=limit;i++)
    {
        if(i<limit || flag)
            (getsum(pos+1,n,i,true));
        else
            v.push_back(getsum(pos+1,n,i,false));
    }

}
int sum(string s)
{
    int res=0;
    for(char x:s)
        res+=x-'0';
    return res;
}
int main()
{

    int a=10;
    getsum(1,a,0,0);
}

