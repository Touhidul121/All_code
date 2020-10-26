#include<bits/stdc++.h>
using namespace std;

class employee
{
    string name;
    int id;
    int salary;

public:
    employee()
    {

    }
    employee(string name1,int id1,int salary1)
    {
        name=name1;
        id=id1;
        salary=salary1;
    }

    void display()
    {
        cout<<name<<"    "<<id<<"    "<<salary<<"\n";
    }
};

int main()
{

    employee ob[3];
    string name;
    int id,salary;

    cout<<"Enter three names and id's of three student "<<"\n";
    for(int i=0; i<3; i++)
    {
        cin>>name;
        cin>>id;
        salary=5000+rand()%3001;

        ob[i]=employee(name,id,salary);
    }

    cout<<"Name    "<<"ID    "<<"Salary  "<<"\n";
    for(int i=0; i<3; i++)
    {
        ob[i].display();
    }
}
