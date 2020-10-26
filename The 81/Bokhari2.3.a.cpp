#include<bits/stdc++.h>
using namespace std;

class A
{
    int a,b;
public:
    A(int a,int b)
    {
        this->a=a;
        this->b=b;
    }
    void showA()
    {
        cout<<"Value of a and b in class A"<<"\n";
        cout<<a<<" "<<b<<"\n";
    }
    friend class B;
    friend class C;
};

class B
{
public:
    void showB(A ob)
    {
        cout<<"Value of a from a member function of class B"<<"\n";
        cout<<ob.a<<"\n";
    }
};

class C
{
public:
    void showC(A ob)
    {
      cout<<"Value of b from a member function of class C"<<"\n";
        cout<<ob.b<<"\n";
    }
};
int main()
{

    int a,b;
    a=20+rand()%11;
    b=35+rand()%6;
    A ob(a,b);
    ob.showA();
    B ob1;
    ob1.showB(ob);
    C ob2;
    ob2.showC(ob);
}
