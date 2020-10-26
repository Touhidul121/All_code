#include<iostream>
#include<vector>
using namespace std;

int decToBinary(int n,int base)
{

    vector<int>b_num;

    int sum=0;
    while (n > 0) {


        b_num.push_back(n % base);
        n = n / base;

    }



        for(int i=0;i<b_num.size();i++)
            sum+=b_num[i];

        return sum;
        b_num.clear();
}

int GCD(int a,int b)
{
    if(b==0)
        return a;
    else
        GCD(b,a%b);
}
int main()
{
    int n,x,r,sum=0;
    cin>>n;
    for(int i=2;i<=n-1;i++){
    x=decToBinary(n,i);
    sum+=x;
    }
    int gcd=GCD(sum,n-2);


    cout<<(sum/gcd)<<"/"<<(n-2)/gcd<<endl;
    return 0;
}
