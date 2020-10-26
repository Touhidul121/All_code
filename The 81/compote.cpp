#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int count=0;
    for(int i=a;i>=1;i--)
    {
      count=0;
      if(2*i<=b&&4*i<=c){
            count=count+i+2*i+4*i;
      break;
      }
    }
    cout<<count<<endl;
}
