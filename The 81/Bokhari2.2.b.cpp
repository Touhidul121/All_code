#include<bits/stdc++.h>
using namespace std;

float maximum(float a,float b,float c)
{
    if(a>b && a>c)return a;
    else if(b>a && b>c)return b;
    else if(c>a && c>b)return c;
}
class total_marks
{
    float mark;
    float cgpa;

public:
    total_marks()
    {

    }
    total_marks(float a,float b)
    {
        mark=a;
        cgpa=b;
    }
    float higest(total_marks ob[3],int flag)
    {
        if(flag==1)
        {
            float a=ob[0].mark;
            float b=ob[1].mark;
            float c=ob[2].mark;

            return maximum(a,b,c);
        }
        else
        {

            float a=ob[0].cgpa;
            float b=ob[1].cgpa;
            float c=ob[2].cgpa;

            return maximum(a,b,c);
        }
    }
};

int main()
{
  total_marks ob[3];
  cout<<"Enter marks and cgpa of three students "<<"\n";
  float mark,cgpa;

  for(int i=0;i<3;i++)
  {
      cin>>mark>>cgpa;
      ob[i]=total_marks(mark,cgpa);
  }
  total_marks ob1;
  cout<<"Enter 1 in case you need maximum marks and Enter 2 in case you need max cgpa"<<"\n";
  int flag;
  cin>>flag;
  cout<<ob1.higest(ob,flag)<<"\n";
}
