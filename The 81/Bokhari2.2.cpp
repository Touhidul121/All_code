#include<bits/stdc++.h>
using namespace std;

class square
{
    int length;
public:
    void setlength(int a)
    {
        length=a;
    }
    friend int area(square ob);
};

int area(square ob)
{
    return ob.length*ob.length;
}
int main()
{
  square ob;
  int n;
  cout<<"Enter last digit of your roll no : "<<"\n";
  cin>>n;
  ob.setlength(n);

  cout<<area(ob)<<"\n";
}
