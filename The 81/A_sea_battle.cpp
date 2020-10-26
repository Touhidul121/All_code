#include<bits/stdc++.h>
using namespace std;

int main()
{
    int w1,h1,w2,h2;
    cin>>w1>>h1>>w2>>h2;

    if(w1==w2)
    cout<<2*(h1+h2)+4+w1+w2<<endl;
    else
    {
        cout<<h1+h2+2+w1-w2+h1-1+h2+1+w1+1+w2+1<<endl;
    }
}
