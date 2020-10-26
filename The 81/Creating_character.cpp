#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
    int x,y,n;
    cin>>x>>y>>n;
    if(x+n<=y)
        cout<<0<<"\n";
    else if(x>y+n)
        cout<<n+1<<"\n";
       else if(x-y==n-1)
            cout<<n<<"\n";
    else
    {
      int y1,x1;
      y1=(n+x-y);
      y1=ceil(y1/2.0);

      cout<<min(y1,n+1)<<"\n";
    }
}
}
