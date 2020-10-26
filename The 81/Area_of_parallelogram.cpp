#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        int x1,y1,x2,y2,x3,y3,x4,y4;

        cin>>x1>>y1>>x2>>y2>>x3>>y3;

        x4=x1+x3-x2;
        y4=y1+y3-y2;
        long long area;
        area=(x1*y2+x2*y3+x3*y4+x4*y1)-(y1*x2+y2*x3+y3*x4+y4*x1);
        area=area/2;
        if(area<0)
            area=(-1)*area;
        cout<<"Case "<<tc<<": ";
        cout<<x4<<" "<<y4<<" "<<area<<"\n";
    }
}
