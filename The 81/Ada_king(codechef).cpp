#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int t,n,k,rem;
    cin>>t;
    while(t--)
    {
        cin>>k;
        rem=64-k;

        for(int i=1;i<=8;i++)
        {
            for(int j=1;j<=8;j++)
            {
                if(i==8 && j==8)
                    cout<<"O";
                else
                    if(rem)
                    cout<<"X",rem--;
                else
                    cout<<".";
            }
            cout<<"\n";
        }
    }
}
