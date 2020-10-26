#include<bits/stdc++.h>
using namespace std;

void decToBinary(int n,int p)
{

    int binaryNum[32];

    int i = 0;
    while (n > 0) {


        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
  for(int k=0;k<p-i;k++)
    cout<<'a';

    for (int j = i - 1; j >= 0; j--){

        if(binaryNum[j]==1)
 cout<<'b';
 else
    cout<<'a';
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,m=0,x,y;
        cin>>n>>k;
        //string s;
        //s=string(n-2,'a')+string(2,'b');

        y=3<<n%(k+1);
        decToBinary(y,n);


}
}





