#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,r1=0,r2=0,r3=0;
    cin>>n;
    vector<int> a;

    for(int i=0;i<n;i++)
    {
        int b;
        cin>>b;
        a.push_back(b);
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
                continue;
            for(int k=0;k<n;k++)
            {
                if(k==i||k==j)
                continue;

                if(a[i]==a[j]+a[k])
                {

                    r1=i+1;
                    r2=j+1;
                    r3=k+1;
                    cout<<r1<<" "<<r3<<" "<<r2<<endl;
                    return 0;
                }

             }
        }
    }
    if(r1==0&&r2==0&&r3==0)
        cout<<-1<<endl;
//    else
//        cout<<r1<<" "<<r2<<" "<<r3<<endl;
    }

