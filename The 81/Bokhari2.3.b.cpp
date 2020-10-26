#include<bits/stdc++.h>
using namespace std;

class A
{
    int i,j;
public:
    A(int a,int b)
    {
        i=a;
        j=b;
    }
    int sum()
    {
        return i+j;
    }
};
int main()
{
    int a,b;
    cout<<"Enter the value of a and b "<<"\n";
    cin>>a>>b;
    A ob(a,b);
    cout<<ob.sum()<<"\n";
}
