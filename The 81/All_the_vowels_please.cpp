#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1="aeiou";

    int k,m=0;
    cin>>k;

    if(k<25){
        cout<<-1<<endl;
    return 0;
    }
    else
    {
        int r1=1,r2=1;
        for(int i=5;i<=sqrt(k);i++)
        {
            if(k%i==0)
                r1=i;
        }
        r2=k/r1;
        if(r1<5||r2<5){
            cout<<-1<<endl;
        return 0;
        }

        else
        {

            for(int i=0;i<r1;i++)
            {

                for(int j=m;j<r2+m;j++)
                {
                  cout<<s1[j%5];
                }
                m++;

            }
        }

    }
}
