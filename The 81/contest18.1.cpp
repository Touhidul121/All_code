#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d;

        cin>>a>>b>>c>>d;

        int x0,y0,x1,y1,x2,y2,left,up;
        cin>>x0>>y0>>x1>>y1>>x2>>y2;

        left=(abs(x1)-abs(x0))+(abs(x2)-abs(x0));
        up=(abs(y1)-abs(y0))+(abs(y2)-abs(y0));

        if((left+(abs(x1)-abs(x0)))<a||(left+(abs(x2)-abs(x0)))<b)
            cout<<"NO"<<endl;
        else if((up+(abs(y1)-abs(y0)))<c||(up+(abs(y2)-abs(y0)))<d)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;

    }
}
