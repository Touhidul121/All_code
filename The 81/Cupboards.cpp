#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,cL1=0,cL2=0,cr1=0,cr2=0;
    cin>>n;

    for(int i=0;i<n;i++)
    {
     cin>>a>>b;
     if(a==1)
            cL1++;
     else
        cL2++;
     if(b==1)
        cr1++;
     else
        cr2++;
    }
    cout<<min(cL1,cL2)+min(cr1,cr2)<<endl;
}
