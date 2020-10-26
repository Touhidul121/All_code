#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
    string s;
    cin>>s;
int   count1=0;
  int  count2=0;
  long long int sum=0;
    for(int i=0;i<s.size();i++)
    {
        sum+=(s[i]-'0');
        if((s[i]-'0')==0)
            count1++;
        if((s[i]-'0')%2==0)
            count2++;
    }

    if(sum==0)
        cout<<"red"<<endl;
        else
    {

    if(sum%3==0)
    {
        if(count1>0&&count2>=2)
            cout<<"red"<<endl;
            else
                cout<<"cyan"<<endl;
    }
    else
        cout<<"cyan"<<endl;
    }
}

}
